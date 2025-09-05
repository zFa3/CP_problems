/*
ID: zFa3
TASK: Square
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b, c;
    cin>>a>>a;
    cin>>a>>c;
    cin>>a>>b;
    cin>>a>>a;
    cout<<max(abs(a-b)*abs(a-b), abs(a-c)*abs(a-c))<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}