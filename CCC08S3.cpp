#include <bits/stdc++.h>
#define For(x) for (int i = 0; i < x; i++)
#define f first
#define s second
#define mp make_pair

using namespace std;

map<char, vector<pair<int, int>>> directions = {
    {'+', {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}},
    {'-', {{1, 0}, {-1, 0}}},
    {'|', {{0, 1}, {0, -1}}}
};

int bfs(pair<int, int> &dim, vector<vector<char>> &grid){
    vector<pair<int, int>> seen;
    vector<pair<pair<int, int>, int>> q;

    q.push_back(mp(mp(0, 0), 1));
    while (q.size() > 0){
        for (auto &dir : directions[grid[q[0].f.s][q[0].f.f]]){
            if (q[0].f.f == dim.s - 1 and q[0].f.s == dim.f - 1)
                return q[0].s;
            pair<int, int> new_index = mp(q[0].f.f + dir.f, q[0].f.s + dir.s);
            if (find(seen.begin(), seen.end(), new_index) != seen.end()) {
                continue;
            } else if (new_index.f > -1 and new_index.f < dim.s and new_index.s > -1 and new_index.s < dim.f){
                if (grid[new_index.s][new_index.f] != '*'){
                    q.push_back(mp(new_index, q[0].s + 1));
                    seen.push_back(new_index);
                }
            }
        }
        q.erase(q.begin());
    }
    return -1;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int x;
    cin >> x;
    For(x){
        pair<int, int> dim;
        cin >> dim.f >> dim.s;
        vector<vector<char>> grid(dim.f);
        string str;
        For (dim.f){
            cin >> str;
            for (auto & chr : str){
                grid[i].push_back(chr);
            }
        }
        cout << bfs(dim, grid) << "\n";
    }
}
