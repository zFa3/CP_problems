/*
 * Matrix Operations
 */

#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int side_len;
    cin >> side_len;

    // 2D vectors holds the matrix
    vector<vector<int>> arr(side_len, vector<int>(side_len));
    vector<pair<int, pair<int, int>>> vec;

    // vec holds the entire matrix, along with the x, y coordinates
    for (int i = 0; i < side_len; i++) {
        for (int j = 0; j < side_len; j++) {
            cin >> arr[i][j];
            vec.push_back({arr[i][j], {i, j}});
        }
    }
    // we sort the matrix, because we can use the x, y coordinates
    // to check if our flood fill is correct, and this way
    // we ensure that we check all the lowest numbers first,
    // so we can get the correct, optimal, answer
    sort(vec.begin(), vec.end());

    int max_length = 1;
    vector<vector<int>> dp(side_len, vector<int>(side_len, 1));
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0},{0, 1}, {0, -1}};


    for (auto& v : vec) {
        // get x and y coords from the pair
        int x = v.s.f;
        int y = v.s.s;
        
        // for each direction, we try to move in that direction
        for (auto& d : directions) {
            int dx = x + d.f;
            int dy = y + d.s;
            
            // if the conditions arr[i][j] < arr[dx][dy] and
            // if it is a valid square:
            if ((dx >= 0 and dx < side_len) and (dy >= 0 and dy < side_len) and arr[dx][dy] > arr[x][y]) {
                // we get the max between going one way vs another
                dp[dx][dy] = max(dp[dx][dy], dp[x][y] + 1);
                // then set the global max length
                max_length = max(max_length, dp[dx][dy]);
            }
        }
    }
    // return -1 due to the question asking for number
    // of moves not number of cells visited
    cout << max_length - 1 << "\n";
}