/*
ID: zFa3
TASK: Assembly Via Remainder
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b, c = 10000;
    cin >> a;
    cout << c << "\n";
    cin >> b;
    c += b; a -= 2;
    cout << c << "\n";
    while (a){
        cin >> b;
        c += b;a--;
        cout << c << "\n";
    }
}

int main(){

    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}