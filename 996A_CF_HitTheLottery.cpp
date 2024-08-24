/*
ID: zFa3
TASK: Hit the lottery
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solution(){
    ll total = 0, amount;
    cin>>amount;
    total += amount / 100;
    amount %= 100;
    total += amount / 20;
    amount %= 20;
    total += amount / 10;
    amount %= 10;
    total += amount / 5;
    amount %= 5;
    return total + amount;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    // ll t;
    // cin>>t;

    // while(t--){
    cout<<solution()<<endl;
    // }
}