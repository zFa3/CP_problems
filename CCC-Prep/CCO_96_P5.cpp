#zFa3
#include <bits/stdc++.h>
#define int long long

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

using namespace std;
unordered_map<string, vector<string>> roads;

pair<int, vector<string>> BFS(string y, vector<string> z, int depth, vector<string> visited){
    pair<int, vector<string>> minimum(1e9, vector<string>{});
    for (auto item : z){
        if (find(visited.begin(), visited.end(), item) == visited.end()){
            if (item == y){
                return mp(depth, visited);
            }
            visited.push_back(item);
            auto searchRes = BFS(y, roads[item], depth + 1, visited);
            if (minimum.first > searchRes.first){
                minimum = searchRes;
            }
            visited.pop_back();
        }
    }
    return minimum;
}

signed main(){
    int a, b;
    string x, y;
    cin >> a >> b;
    For (a){
        cin >> x >> y;
        if (roads.find(x) != roads.end()){
            roads[x].push_back(y);
        } else {
            roads[x] = {y};
        }
        if (roads.find(y) != roads.end()){
            roads[y].push_back(x);
        } else {
            roads[y] = {x};
        }
    }
    For (b){
        cin >> x >> y;
        cout << x[0];
        for (auto i : BFS(y, roads[x], 0, {}).second){
            cout << i[0];
        }
        cout << y[0] << "\n";
    }
}
