/*
ID: zFa3
TASK: Filling Shapes
LANG: C++
*/


#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll exp(ll a, ll b){
    ll c = 1;
    for (size_t i = 0; i < b; ++i)
    {
        c *= a;
    }
    return c;
}

int main(){
    ll t;
    cin>>t;
    if (t % 2 == 0){
        cout<<exp(2, (t/2));
    }else{
        cout<<0;
    }
}