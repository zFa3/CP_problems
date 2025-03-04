#include <bits/stdc++.h>
#define int long long
#define For(x) for (int _ = 0; _ < x; _++)
using namespace std;

void returnPrimeDivisors(int num) {
    vector<int> divisors;
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            divisors.push_back(i);
            num /= i;
        }
    }
    for (auto &itm : divisors){
        cout << itm << "\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x; cin >> x;
    returnPrimeDivisors(x);
}
