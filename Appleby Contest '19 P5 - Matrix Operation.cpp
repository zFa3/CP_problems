/*
ID: zFa3
DATE: 2024-10-25
TASK: Appleby Contest '19 P5 - Matrix Operation (DMOJ.ca)
LANG: C++
*/

// DP PRACTICE
#include <bits/stdc++.h>
// #define int long long

// debug
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

// speed
#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

const auto start = std::chrono::high_resolution_clock::now();
double get_time(){ return std::chrono::duration<double>(std::chrono::high_resolution_clock::now()-start).count(); }
#include <bits/stdc++.h>

int main() {
    zFa3

    int side_len;
    cin >> side_len;

    vector<vector<int>> arr(side_len, vector<int>(side_len));
    vector<pair<int, pair<int, int>>> vec;
    for (int i = 0; i < side_len; i++) {
        for (int j = 0; j < side_len; j++) {
            cin >> arr[i][j];
            vec.push_back({arr[i][j], {i, j}});
        }
    }

    sort(vec.begin(), vec.end());

    int max_length = 1;
    vector<vector<int>> dp(side_len, vector<int>(side_len, 1));
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0},{0, 1}, {0, -1}};


    for (auto& v : vec) {
        int x = v.s.f;
        int y = v.s.s;
        
        for (auto& d : directions) {
            int dx = x + d.f;
            int dy = y + d.s;
            
            if ((dx >= 0 and dx < side_len) and (dy >= 0 and dy < side_len) and arr[dx][dy] > arr[x][y]) {
                dp[dx][dy] = max(dp[dx][dy], dp[x][y] + 1);
                max_length = max(max_length, dp[dx][dy]);
            }
        }
    }
    cout << max_length - 1 << "\n";
}
