#include <bits/stdc++.h>
#define int long long

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair

// speed
#pragma GCC optimize("O3")

using namespace std;

int c;
vector<int> dp(1e4, -1);
int search(int node, vector<vector<int>> &slides, vector<bool> &visited){
    if (node == c){
        dp[node] = 1;
        return 1;
    }
    if (dp[node] != -1){
        return dp[node];
    }
    int total = 0;
    for (auto next : slides[node]){
        if (!visited[node]){
            visited[node] = true;
            total += search(next, slides, visited);
            visited[node] = false;
        }
    }
    dp[node] = total;
    return total;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x = 0, y = 1;
    cin >> c;
    vector<vector<int>> slides(c + 1);
    while (!(x == 0 and y == 0)){
        slides[x].push_back(y);
        // slides[y].push_back(x);
        cin >> x >> y;
    }
    vector<bool> vis(c + 1, false);
    cout << search(1, slides, vis) << "\n";
}
