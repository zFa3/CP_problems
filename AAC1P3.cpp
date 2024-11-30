/*
user : zFa3
problem : An Animal Contest 1 P3 - Happy Alpacas
Date : 11 30 2024
*/
#include <bits/stdc++.h>

#define mp make_pair
#define For(x) for (int i = 0; i < x; i++)
#define int long long
#define print(x) cout << x;

using namespace std;

signed main(){
    int x, y;
    cin >> x >> y;
    if ((x - y) % 2 == 0){
        For (y){ print("1"); if (i != x-1) print(" ")}
        For (x-y){ if (i % 2 == 0) print("2") else print("1"); if (y+i != x-1) print(" ")}
    } else {
        print(-1)
    }
    print("\n")
}
