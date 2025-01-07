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
// start city index, cost, then connecting cities
unordered_map<int, vector<pair<int, int>>> wires;

int BFS(int endCity, vector<pair<int, int>> connectingCities, int depth, vector<int> visited){
    int minimum = 1e9;
    for (auto item : connectingCities){
        if (find(visited.begin(), visited.end(), item.second) == visited.end()){
            if (item.second == endCity){
                return depth + item.first;
            }
            visited.push_back(item.second);
            auto searchRes = BFS(endCity, wires[item.second], depth + item.first, visited);
            if (minimum > searchRes){
                minimum = searchRes;
            }
            visited.pop_back();
        }
    }
    return minimum;
}

signed main(){
    int a, b, c;
    int city1, city2, cost;
    cin >> a >> b >> c;
    // computers, wires, queries
    For (b){
        cin >> city1 >> city2 >> cost;
        if (wires.find(city1) != wires.end()){
            wires[city1].push_back(mp(cost, city2));
        } else {
            wires[city1] = {mp(cost, city2)};
        }
        if (wires.find(city2) != wires.end()){
            wires[city2].push_back(mp(cost, city1));
        } else {
            wires[city2] = {mp(cost, city1)};
        }
    }
    For (c){
        cin >> city1 >> city2;
        cout << BFS(city2, wires[city1], 0, {}) << "\n";
    }
}
