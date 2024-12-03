#include <bits/stdc++.h>
#define int long long

// debug
#define pr(x) cout << x << "\n";
#define debug(x) cout << "DEBUG    " << x << "\n";
#define print(x) cout << x << "\n";
#define cout_vec(x) for (auto &i : x) cout << i << "\n";
#define cout_vpair(x) for (auto &i : x) cout << i.f << ' ' << i.s << "\n";
using namespace std;

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())

// syntax
#define f first
#define s second
#define mp make_pair


#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

auto start = std::chrono::high_resolution_clock::now();
void set_start(){ start = std::chrono::high_resolution_clock::now(); }
double get_time(){ return std::chrono::duration<double>(std::chrono::high_resolution_clock::now()-start).count(); }

vector<pair<int, int>> diag_dir = {{1, 0}, {1, 1}, {0, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}, {-1, 1}};
vector<pair<int, int>> ff_dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int sol(){
    int x; cin >> x;
    vector<int> arr(x);
    For(x) cin >> arr[i];
    vector<int> pfs(x + 1);
    pfs[0] = 0;
    FOR(1, x + 1, 1) pfs[i] = pfs[i-1] + arr[i-1];
    map<int, int> last_seen_pfs;
    vector<int> dp(x + 1, 0);
    vector<int> index(x + 1);
    For(x + 1){
        if (last_seen_pfs.find(pfs[i]) != last_seen_pfs.end()){
            index[i] = last_seen_pfs[pfs[i]];
        } else {
            index[i] = -3;
        }
        last_seen_pfs[pfs[i]] = i;
    }
    dp[0] = 0;
    FOR(1, x + 1, 1){
        dp[i] = max(dp[i - 1], dp[i]);
        if (index[i] != -3)
            dp[i] = max(dp[i], dp[index[i]] + 1);
    }
    return dp[dp.size() - 1];
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--){
        pr(sol());
    }
}