#include <bits/stdc++.h>
// #define int long long

using namespace std;
char EMPTY = '.';

pair<int, int> find_empty(vector<vector<char>> array){
    for (int i = 0; i < array.size(); i++){
        for (int j = 0; j < array[i].size(); j++){
            if (array[i][j] == EMPTY){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

vector<pair<int, int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
void fill_empty(vector<vector<char>> &array, pair<int, int> index, bool boolean){
    if (array[index.first][index.second] == '.'){
        array[index.first][index.second] = (boolean ? 'W' : 'B');
        for (auto dir : directions){
            pair<int, int> new_direction = index;
            new_direction.first += dir.first;
            new_direction.second += dir.second;
            if (new_direction.first >= 0 and new_direction.first < array.size() and new_direction.second >= 0 and new_direction.second < array[0].size())
                fill_empty(array, new_direction, not boolean);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> y >> x;
    vector<vector<char>> array(y, vector<char>(x));
    for (int _ = 0; _ < y; _++){
        for (int i = 0; i < x; i++){
            cin >> array[_][i];
        }
    }
    pair<int, int> index = find_empty(array);
    while (index != make_pair(-1, -1)){
        fill_empty(array, index, true);
        index = find_empty(array);
    }
    for (int _ = 0; _ < y; _++){
        for (int i = 0; i < x; i++){
            cout << array[_][i];
        }
        cout << "\n";
    }
}
