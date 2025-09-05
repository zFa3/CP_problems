/*
ID: zFa3
TASK: Maximal Multipe Sum
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, maximum=0,ans;
    cin>>a;
    for (int i=2;i<a+1;i++){
        ll total=0;
        for (int v=1;v<a/i+1;v++){
            total+=i*v;
        }
        if (total>maximum){
            ans=i;
        }
        maximum = max(total, maximum);
    }
    cout<<ans<<"\n";
}

int main(){
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}