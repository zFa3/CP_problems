#include <bits/stdc++.h>
#define int long long // ~ 10 ^ 19
using namespace std;

bool isPrimeNumber(int num){
    for (int x = 2; x * x <= num; x++){
        if (num % x == 0){
            return false;
        }
    }
    return (num != 1);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    int x, y;
    for (int j = 0; j < tc; j++){
        cin >> x >> y;
        int total = 0;
        for (int k = 0; k < y; k++){
            total += x * pow(10, k);
        }
        cout << (isPrimeNumber(total) ? "YES\n" : "NO\n");
    }
}
