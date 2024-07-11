/*
ID: zFa3
TASK: New Bakery
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum_to(ll a){
    return (a * (a + 1)) / 2;
}

void solution(){
    ll a, b, c, total = 0;
    cin>>a>>b>>c;
    if (c <= b){
        cout<<a * b<<'\n';
    } else if (c - b < b - 1){
        cout<<sum_to(c) - sum_to(b - 1) + (c - b + 1) * b<<'\n';
    } else {
        cout<<sum_to(c) - sum_to(c - a)<<'\n';
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