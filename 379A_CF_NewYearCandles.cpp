/*
ID: zFa3
TASK: New Year Candles
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, k, tt = 0;
    cin>>t>>k;
    tt += t;
    while (1){
        if (k > t){
            break;
        }
        t -= (k-1);
        tt += 1;
    }
    cout<<tt;
}