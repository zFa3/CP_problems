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

#define yc second
#define xc first

using namespace std;
int x, y;
pair<int, int> n = {-1, -1};
vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool search(pair<int, int> startLocation, vector<vector<char>> &grid){
    if (grid[startLocation.yc][startLocation.xc] == 'X'){
        return false;
    }
    queue<pair<int, int>> qu;
    qu.push(startLocation);
    bool tracker = true;
    while (qu.size()){
        auto location = qu.front(); qu.pop();
        if (grid[location.yc][location.xc] != 'X'){
            if (grid[location.yc][location.xc] == '*'){
                tracker = false;
            }
            grid[location.yc][location.xc] = 'X';
            for (auto newloc : directions){
                auto ny = location.yc + newloc.yc;
                auto nx = location.xc + newloc.xc;
                if (nx >= 0 and nx < x and ny >= 0 and ny < y)
                    qu.push({nx, ny});
            }
        }
    }
    grid[startLocation.yc][startLocation.xc] = 'X';
    return tracker;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> y >> x;
    vector<pair<int, int>> indicies;
    vector<vector<char>> grid(y, vector<char>(x));
    for (int i = 0 ; i < y ; i++){
        string str;
        cin >> str;
        for (int j = 0; j < x; j++){
            if (str[j] == '.'){
                indicies.push_back({j, i});
            }
            grid[i][j] = str[j];
        }
    }
    int total = 0;
    for (auto roomLocation : indicies){
        total += search(roomLocation, grid);
    }
    cout << total << "\n";
}
