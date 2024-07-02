/*
ID: zFa3
TASK: Boiling Water
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a;
    cin>>a;
    cout<<to_string(a*5-400)<<'\n';
    if ((a*5-400)==100){
        cout<<0<<'\n';
    } else if ((a*5-400)<100){
        cout<<1<<'\n';
    } else {
        cout<<-1<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solution();
}