/*
ID: zFa3
TASK: Game with Integers
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a;
    cin>>a;
    if (a%3==0){
        cout<<"Second"<<'\n';
    } else {
        cout<<"First"<<'\n';
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