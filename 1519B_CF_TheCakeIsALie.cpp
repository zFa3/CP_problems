/*
ID: zFa3
TASK: The Cake is A lie
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll x1, y1, c;
    cin>>x1>>y1>>c;
    ll cost = (x1 - 1) + (x1) * (y1 - 1);
    if (cost == c){
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}