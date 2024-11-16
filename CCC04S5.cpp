/*
 * zFa3
 * Super Plumber
 */

#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define For(x) for (int i = 0; i < x; i++)

bool isnumber(char x){
    vector<char> nums = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    return find(nums.begin(), nums.end(), x) != nums.end();
}

map<pair<pair<int, int>, pair<bool, bool>>, pair<int, bool>> memo;
vector<string> str;
int maxx, maxy;
pair<int, bool> maxScore(int x, int y, vector<bool> du){
    auto key = mp(mp(x, y), mp(du[0], du[1]));
    if (memo.find(key) != memo.end()) return mp(memo[key].first, memo[key].second);
    if (str[y][x] == '*'){
        memo[key] = mp(0, false);
        return memo[key];
    }
    int r = 0;
    if (isnumber(str[y][x])) r = stoi(str[y].substr(x, 1));
    if (x == maxx-1 and y == maxy-1){
        memo[key] = mp(r, true);
        return memo[key];
    }
    pair<int, bool> mxSc = mp(r, false);
    if (x != maxx-1){
        vector<bool> newDu = {true, true};
        auto rec = maxScore(x + 1, y, newDu);
        if (rec.second and r+rec.first >= mxSc.first)
            mxSc = mp(r+rec.first, rec.second);
    }
    if (du[0]){
        if (y != maxy-1){
            // down
            vector<bool> newDu = {true, false};
            auto rec = maxScore(x, y + 1, newDu);
            if (rec.second and r+rec.first >= mxSc.first)
                mxSc = mp(r+rec.first, rec.second);
        }
    }
    if (du[1]){
        // up
        if (y != 0){
            vector<bool> newDu = {false, true};
            auto rec = maxScore(x, y - 1, newDu);
            if (rec.second and r+rec.first >= mxSc.first)
                mxSc = mp(r+rec.first, rec.second);
        }
    }
    memo[key] = mxSc;
    return memo[key];
}

signed main(){
    while (true){
        cin >> maxy >> maxx;
        if (maxx == 0 and maxy == 0) break;
        string t;
        For (maxy) {cin >> t; str.push_back(t);}
        vector<bool> du = {true, true};
        cout << maxScore(0, maxy-1, du).first << "\n";
        str.clear();
        memo.clear();
    }
}
