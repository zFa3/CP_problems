#include <bits/stdc++.h>
#define int long long

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define REV(a) reverse(a.begin(), a.end())
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair

// speed
#pragma GCC optimize("O3")

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    const int inf = 1e9;
    int cities, roads, destinations;
    int from, to, cost, destinationCity;
    cin >> cities >> roads >> destinations;
    vector<pair<int, int>> adjList[cities + 2];
    vector<int> minCost(cities + 2, -1);
    vector<int> keyCities;
    For (roads){
        cin >> from >> to >> cost;
        // adjList[from].push_back(mp(to, cost));
        adjList[from].push_back({to, cost});
        // adjList[to].push_back(mp(from, cost));
        adjList[to].push_back({from, cost});
    }
    
    For (destinations){
        cin >> destinationCity;
        keyCities.push_back(destinationCity);
    }
    
    // bfs
    // pair City #, mincost
    queue<pair<int, int>> qu;
    vector<bool> visited(cities + 2, false);
    qu.push({1, inf});
    while (qu.size()) {
        auto item = qu.front();
        qu.pop();
        // item[0] -> curr city
        // item[1] -> current min cost
        if (!visited[item.first] or minCost[item.first] < item.second){
            visited[item.first] = true;
            for (auto nextCity : adjList[item.first]){
                qu.push(mp(nextCity.first, min(nextCity.second, item.second)));
            }
        }
        minCost[item.first] = max(minCost[item.first], item.second);
    }
    int minimumCost = inf;
    for (auto item : keyCities){
        minimumCost = min(minimumCost, minCost[item]);
    }
    cout << minimumCost << "\n";
}
