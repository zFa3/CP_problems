#include <bits/stdc++.h>

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

#define roadCost second
#define cityNum first

using namespace std;

vector<vector<vector<int>>> dirs = {
    {{1, 0, 0}, {0, 1, 2}, {0, -1, 3}},
    {{-1, 0, 1}, {0, 1, 2}, {0, -1, 3}},
    {{0, 1, 2}, {1, 0, 0}, {-1, 0, 1}},
    {{0, -1, 3}, {1, 0, 0}, {-1, 0, 1}},
    {{1, 1, 4}, {1, -1, 6}, {-1, 1, 7}},
    {{-1, -1, 5}, {1, -1, 6}, {-1, 1, 7}},
    {{1, -1, 6}, {1, 1, 4}, {-1, -1, 5}},
    {{-1, 1, 7}, {1, 1, 4}, {-1, -1, 5}}
};

int sum = 0;
int height, width;
string word;
vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};
void dfs(int currentX, int currentY, int letterCount, vector<vector<char>> &grid, vector<vector<bool>> &visited, bool turned, int prevDirection){
    if (letterCount == word.size() - 1){
        if (grid[currentY][currentX] == word[letterCount]){
            sum++;
        }
        return;
    }
    if (prevDirection == -1){
        for (int i = 0; i < 8; i++){
            auto item = directions[i];
            auto newx = currentX + item.first;
            auto newy = currentY + item.second;
            if (newx < 0 or newx >= width or newy < 0 or newy >= height){
                continue;
            }
            
            if (grid[newy][newx] != word[letterCount + 1]){
                continue;
            }
            
            visited[newy][newx] = true;
            dfs(newx, newy, letterCount + 1, grid, visited, false, i);
            visited[newy][newx] = false;
        }
    } else {
        for (int i = 0; i < 3; i++){
            vector<int> item = dirs[prevDirection][i];
            auto newx = currentX + item[0];
            auto newy = currentY + item[1];
            if (newx < 0 or newx >= width or newy < 0 or newy >= height){
                continue;
            }
            
            if (grid[newy][newx] != word[letterCount + 1]){
                continue;
            }
            
            if ((item[2] != prevDirection and !turned) or (item[2] == prevDirection)){
                if (!visited[newy][newx]){
                    visited[newy][newx] = true;
                    bool isTurned = item[2] != prevDirection;
                    dfs(newx, newy, letterCount + 1, grid, visited, turned or isTurned, item[2]);
                    visited[newy][newx] = false;
                }
            }
        }
    }
    return;
    
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> word;
    cin >> height >> width;
    vector<vector<char>> grid(height, vector<char>(width));
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            cin >> grid[i][j];
        }
    }
    
    vector<vector<bool>> vis(height, vector<bool>(width));
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (grid[i][j] == word[0])
                dfs(j, i, 0, grid, vis, false, -1);
        }
    }
    cout << sum << "\n";
}
