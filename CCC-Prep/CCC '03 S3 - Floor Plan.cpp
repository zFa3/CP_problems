#include <bits/stdc++.h>

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define REV(a) reverse(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair

#define x first
#define y second

// speed
#pragma GCC optimize("O3")

using namespace std;

int x, N, M;

vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int roomSize(int x, int y, vector<vector<bool>> &grid){
    int counter = 0;
    queue<pair<int, int>> qu;
    qu.push(mp(y, x));
    grid[y][x] = false;
    while (qu.size()){
        pair<int, int> xy = qu.front(); qu.pop();
        counter++;
        for (auto i : directions){
            auto nx = xy.second + i.x;
            auto ny = xy.first + i.y;
            if (nx < 0 or nx >= M or ny < 0 or ny >= N){
                continue;
            }
            if (grid[ny][nx]){
                grid[ny][nx] = false;
                qu.push(mp(ny, nx));
            }
        }
    }
    return counter;
}

pair<int, int> findRoom(vector<vector<bool>> &grid){
    for (int i = 0; i < grid.size(); i++){
        for (int j = 0; j < grid[i].size(); j++){
            if (grid[i][j])
                return mp(i, j);
        }
    }
    return mp(-1, -1);
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> x >> N >> M;
    vector<vector<bool>> grid(N, vector<bool>(M));
    string temp;
    for (int v = 0; v < N; v++){
        cin >> temp;
        for (int j = 0; j < temp.size(); j++){
            grid[v][j] = (temp[j] == '.');
        }
    }
    vector<int> roomSizes;
    pair<int, int> end = mp(-1, -1);
    pair<int, int> roominfo = findRoom(grid);
    while (roominfo != end){
        int rmsize = roomSize(roominfo.y, roominfo.x, grid);
        roomSizes.push_back(rmsize);
        roominfo = findRoom(grid);
    }
    SORT(roomSizes);
    REV(roomSizes);
    pair<int, int> roomsLeftover = mp(0, x);
    for (int i = 0; i < roomSizes.size(); i++){
        if (roomSizes[i] <= roomsLeftover.second){
            roomsLeftover.first++;
            roomsLeftover.second -= roomSizes[i];
        } else {
            break;
        }
    }
    if (roomsLeftover.first != 1){
        cout << to_string(roomsLeftover.first) + " rooms, " + to_string(roomsLeftover.second) + " square metre(s) left over\n";
    } else {
        cout << "1 room, " + to_string(roomsLeftover.second) + " square metre(s) left over\n";
    }
}

/*
 105
 14
 16
 IIIIIIIIIIIIIIII
 I......I.......I
 I......III.....I
 I........I.....I
 I........IIIIIII
 IIIIIIIIII.....I
 I.I......I.....I
 III..III.I.....I
 I....I.IIIII...I
 I....I.....III.I
 I....I.......I.I
 I....I.....III.I
 I....I.....I...I
 IIIIIIIIIIIIIIII
 */
