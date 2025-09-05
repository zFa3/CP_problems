/*
ID: zFa3
TASK: Silent Auction
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, largest = -1e9, b;
    cin>>t;
    string name, a;
    while(t--){
        cin>>a>>b;
        if (b > largest){
            name = a; largest = b;
        }
    }
    cout<<name<<'\n';
}