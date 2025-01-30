
#include <bits/stdc++.h>

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
#pragma GCC optimize("O3")

using namespace std;

int room[1000001];
bool visited[1000001];
vector<int> visitable[1000001];
int x, y;

unordered_map<int, vector<pair<int, int>>> memo = {};
vector<pair<int, int>> findFactors(int value) {
    if (memo.find(value) != memo.end()){
        return memo[value];
    }
    vector<pair<int, int>> factors;
    for (int i = 1; i <= sqrt(value); i++) {
        if (value % i == 0) {
            factors.push_back(mp(i, value / i));
        }
    }
    memo[value] = factors;
    return factors;
}

bool BFS(){
    queue<int> qu;
    qu.push(0);
    while (qu.size()){
        auto loc = qu.front();
        qu.pop();
        if (loc == (x * y) - 1){
            return true;
        };
        visited[loc] = true;
        for (auto newloc : visitable[room[loc]]){
            if (!visited[newloc])
                qu.push(newloc);
        }
    }
    return false;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> y >> x;
    for (int i = 0; i < y; i++){
        for (int j = 0; j < x; j++){
            cin >> room[i * x + j];
            visitable[(i + 1) * (j + 1)].push_back(i * x + j);
        }
    }
    cout << (BFS() ? "yes\n" : "no\n");
}
