/*
ID: zFa3
TASK: Zero That Out
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, m;
    cin>>t;
    vector<ll> arr;
    for (size_t i = 0; i < t; i++)
    {
        cin>>m;
        if (m == 0){
            arr.pop_back();
        } else {
            arr.push_back(m);
        }
    }
    cout<<SUM(arr);
}