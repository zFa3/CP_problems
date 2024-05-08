/*
ID: zFa3
TASK: Theater
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ceiling(ll a, ll b){
    ll ret = a / b;
    if (a % b){
        ret++;
    }
    return ret;
}

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    cout << ceiling(a, c) * ceiling(b, c);
    return 0;
}