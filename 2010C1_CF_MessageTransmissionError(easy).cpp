/*
ID: zFa3
DATE: 2024-10-06
TASK:
LANG: C++
*/

#include <bits/stdc++.h>
#define int long long
#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cout << "DEBUG\t" << x << "\n";
#define enl "\n";
using namespace std;

signed main(){
    zFa3
    string x;
    cin >> x;
    int p1 = 0;
    bool breaker = true;
    for (int p2 = 1; p2 < x.length()-1; p2++){
        int ct1 = p1;
        int ct2 = p2;
        while (x[ct1] == x[ct2] and ct2 < x.length()){
            ct1++; ct2++;
        }
        if (ct2 == x.length() and ct1 > p2){
            cout << "YES\n";
            for (int i = 0; i < ct1; i++){
                cout << x[i];
            }
            cout << enl;
            breaker = false; break;
        }
    }
    if (breaker){
        cout << "NO\n";
    }
}
