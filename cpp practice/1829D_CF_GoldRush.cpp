/*
ID: zFa3
TASK: Gold Rush
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool rec(ll a, ll b){
    if (a == b){
        return true;
    }
    if (a % 3 != 0){
        return false;
    }
    return rec(a/3, b) or rec(a/3 * 2, b);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        ll a, b;
        cin>>a>>b;
        if (a < b){
            cout<<"NO\n";
        } else if (rec(a, b)){
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
}