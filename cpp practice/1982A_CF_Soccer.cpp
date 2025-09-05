/*
ID: zFa3
TASK: Soccer
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    if ((a>b && c>d) || (a<b && c<d)){
        cout<<"yes"<<'\n';
    } else {
        cout<<"NO"<<'\n';
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