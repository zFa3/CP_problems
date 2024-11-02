/*
ID: zFa3
DATE: 2024-11-01
TASK: Caesars Legions
LANG: C++
*/
#include <bits/stdc++.h>
#define int long long

// debug
#define debug(x) cout << "DEBUG    " << x << "\n";
#define print(x) cout << x << "\n";
#define cout_vec(x) for (auto &i : x) cout << i << "\n";
#define cout_vpair(x) for (auto &i : x) cout << i.first << ' ' << i.second << "\n";
using namespace std;

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())

// syntax
#define mp make_pair

// other macros
#define MOD (int)1e8

// speed
#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);
#pragma GCC optimize("O3")

const auto start = std::chrono::high_resolution_clock::now();
double get_time(){ return std::chrono::duration<double>(std::chrono::high_resolution_clock::now()-start).count(); }


map<pair<pair<int, int>, pair<int, int>>, int> memo;
int dp(int a, int b, int x, int y, int prevCnt, int prev){
    if (a == 0 && b == 0){
        if (a + b == 0 && prev != -1)
            return 1;
        return 0;
    }
    auto key = mp(mp(prevCnt, prev), mp(a, b));
    if (memo.find(key) != memo.end()){
        return memo[key];
    }
    int total = 0;
    if ((prevCnt < x && prev == 0) || (prevCnt < y && prev == 1) || prev == -1){
        // if we can use either x or y
        if (a != 0){
            if (prev == 0) total += dp(a - 1, b, x, y, prevCnt + 1, 0);
            else total += dp(a - 1, b, x, y, 1, 0);
        }
        if (b != 0){
            if (prev == 1) total += dp(a, b - 1, x, y, prevCnt + 1, 1);
            else total += dp(a, b - 1, x, y, 1, 1);
        }
    } else {
        // otherwise we can't use the previous
        if (prev == 0 and b != 0) total += dp(a, b - 1, x, y, 1, 1);
        if (prev == 1 and a != 0) total += dp(a - 1, b, x, y, 1, 0);
    }
    memo[key] = total % MOD;
    return memo[key];
}

signed main(){
    zFa3
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    cout << dp(a, b, x, y, 0, -1);
}
