/*
ID: zFa3
TASK: Bachgold Problem
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    if (t % 2 == 0){
        cout<<t/2<<'\n';
        for (size_t i = 0; i < t/2; i++)
        {
            cout<<2<<' ';
        }
        cout<<endl;
    } else {
        cout<<t/2<<'\n';
        for (size_t i = 1; i < t/2; i++)
        {
            cout<<2<<' ';
        }
        cout<<3<<endl;
    }
}