/*
ID: zFa3
TASK: K Sort
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
#define SORT(a) sort(a.begin(), a.end())
using namespace std;

void solution(){
    ll a, maximum, current;
    cin>>a>>maximum;
    vector<ll> diffs;
    for (size_t i = 1; i < a; i++)
    {
        cin>>current;
        if (current < maximum){
            diffs.push_back(maximum - current);
        }
        maximum = max(current, maximum);
    }
    SORT(diffs);
    ll ct = 0, len = diffs.size(), tt = 0;
    for (ll item : diffs){
        tt += (item - ct) * (len + 1);
        ct = item;
        len--;
    }
    cout<<tt<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}