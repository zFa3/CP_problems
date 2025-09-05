/*
ID: zFa3
TASK: Prefiquence
LANG: C++
*/


#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll c, d;
    string a, b;
    cin>>c>>d>>a>>b;
    ll a1=0,b1=0;
    while (true){
        if (a[a1]==b[b1]){
            a1++;b1++;
        } else {
            b1++;
        }
        if (a1>a.size()-1 || b1>b.size()-1){
            cout<<a1<<"\n"; break;
        }
    }
}

int main(){
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}