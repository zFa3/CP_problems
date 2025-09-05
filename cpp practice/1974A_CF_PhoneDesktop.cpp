/*
ID: zFa3
TASK: Phone Desktop
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b, desktops=0, single=0;
    cin>>a>>b;
    desktops = ceil((float)b/2);
    if (b%2==1){single++;}
    a-=(desktops-single)*7;
    a-=single*11;
    desktops+=ceil((float)max((ll)0, a)/15);
    cout<<desktops<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}