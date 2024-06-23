/*
ID: zFa3
TASK: Can I Square?
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b, c=0;
    cin>>a;
    for (size_t i = 0; i < a; i++)
    {
        cin>>b;
        c+=b;
    }
    if (pow(c, 0.5)==(int)pow(c, 0.5)){
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