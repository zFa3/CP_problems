/*
ID: zFa3
TASK: Double Dice
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, a=100, d=100;
    cin>>t;
    ll r, l;
    for (size_t i = 0; i < t; i++)
    {
        cin>>r>>l;
        if (r>l){
            d-=max(r, l);
        } else if (l>r){
            a-=max(r, l);
        }
    }
    cout<<a<<'\n'<<d<<'\n';
}