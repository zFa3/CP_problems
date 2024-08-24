/*
ID: zFa3
TASK:
LANG: C++
*/

// #include <bits/stdc++.h>
// can't use for some reason
#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
#include <queue>
#include <set>

#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n, m, k;
        cin>>n>>m>>k;
        // number of tasks, shower duration, minutes in a day
        vector<pair<int, int>> queries;
        ll l, r;
        for (int i = 0; i < n; i++){
            cin>>l>>r;
            queries.push_back(make_pair(l, r));
        }
        sort(queries.begin(), queries.end());
        bool yes = false;
        // beginning and end of the day
        if (queries[0].first >= m or k -  queries[queries.size()-1].second >= m){yes = true;}
        for (int i = 1; i < n; i++){
            if (queries[i].first - queries[i-1].second >= m){yes = true;}
        }
        cout<<(yes ? "YES" : "NO")<<"\n";
    }
}