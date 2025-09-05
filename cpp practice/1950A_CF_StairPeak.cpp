/*
ID: zFa3
TASK: Stair, Peak, or Neither?
LANG: C++
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;cin>>t;while(t--){ll a, b, c;cin>>a>>b>>c;if(a<b&&b<c){cout<<"STAIR\n";}else if(a<b&&b>c){cout<<"PEAK\n";}else{cout<<"NONE\n";}}
}