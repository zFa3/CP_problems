#include <bits/stdc++.h>
#define int long long
#pragma GCC optimize("O3")

#define weight first
#define value second

// debug
#define debug(x) cout << "DEBUG\t" << x << "\n";
#define cout_vec(x) for (auto &i : x) cout << i << "\n";
#define cout_vpair(x) for (auto &i : x) cout << i.first << ' ' << i.second << "\n";
#define For(x) for (int i = 0; i < x; i++)

const auto start = std::chrono::high_resolution_clock::now();
double get_time(){ return std::chrono::duration<double>(std::chrono::high_resolution_clock::now()-start).count(); }

using namespace std;

int knapsack(int max_weight, vector<pair<int, int>> items){
    int MAXN = items.size();
    int MAXM = max_weight;
    vector<vector<int>> dp(MAXN+1, vector<int>(MAXM+1, 0));
    // the number of items
    dp[MAXN][MAXM] = 1;
    for (int i = 1; i < MAXN+1; i++){
        // the max weight the backpack can carry
        for (int j = 1; j < MAXM+1; j++){
            if (items[i-1].weight > j){
                // cannot include the item
                // then the max will be the same with
                // i-1 items since the ith item cannot be included
                dp[i][j] = dp[i-1][j];
            } else {
                // otherwise the take the max of
                // not including the item and including it
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-items[i-1].weight] + items[i-1].value);
            }
        }
    }
    return dp[MAXN][MAXM];
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, max_weight;
    cin >> n >> max_weight;
    
    vector<pair<int, int>> items(n);
    For(n){
        // cin >> weight >> value
        cin >> items[i].first >> items[i].second;
    }
    cout << knapsack(max_weight, items) << "\n";
}
