/*
ID: zFa3 + ZZ-
DATE: 2024-09-13 22:22:19
TASK: Bamboo cookies
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t, temp;
    cin >> t;

    ll even = 0;
    ll odd = 0;

    for (int i = 0; i < t; i++){
        cin >> temp;
        if (temp % 2){
            odd++;
        } else {
            even++;
        }
    }
    
    cout << (even / 2) + (odd / 2) << endl;
}
