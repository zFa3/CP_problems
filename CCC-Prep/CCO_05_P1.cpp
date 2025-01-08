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
#pragma GCC optimize("O3")

using namespace std;

int M, N;
int a, b, c;

bool trinity(int x){
    return x == a || x == b || x == c;
}

vector<pair<int, int>> directions = {mp(0, 1), mp(0, -1), mp(1, 0), mp(-1, 0)};
bool searchGrid(int x, int y, vector<vector<bool>>& visited, vector<vector<int>>& arr){
    if (y == M-1){
        return true;
    }
    bool answer = false;
    for (auto dir : directions){
        auto newy = y + dir.first;
        auto newx = x + dir.second;
        if (newx >= 0 && newx < N && newy >= 0 && newy < M){
            if (visited[newy][newx] == false and trinity(arr[newy][newx])){
                visited[newy][newx] = true;
                answer |= searchGrid(newx, newy, visited, arr);
            }
        }
    }
    return answer;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> N >> M;
    vector<vector<int>> arr(M, vector<int>(N));
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 10; i++){
        a = i;
        for (int j = 0; j < 10; j++){
            b = j;
            for (int k = 0; k < 10; k++){
                c = k;
                for (int n = 0; n < N; n++){
                    vector<vector<bool>> vis(M, vector<bool>(N, false));
                    bool answer = searchGrid(n, 0, vis, arr);
                    if (answer){
                        cout << i << ' ' << j << ' ' << k << "\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout << "-1 -1 -1\n";
}