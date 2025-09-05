/*
ID: zFa3
TASK: New Years Number
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool solution(){
    ll a;
    cin>>a;
    if (a < 2020){
        return 0;
    }
    if (a % 2020 == 0 or a % 2021 == 0){
        return 1;
    }
    for (size_t i = 0; i < (a / 2020) + 1; i++)
    {
        if ((a - (2020 * i)) % 2021 == 0){
            return 1;
        }
    }
    return 0;    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        cout<<(solution() ? "YES\n" : "NO\n");
    }
}