// zFa3 and ZZ_ was here
#include <bits/stdc++.h>
#define int long long
using namespace std;

#define definitely_neccessary_code ios::sync_with_stdio(0); cin.tie(0);
#define debug(x) cout << x << "\n";
int ROWS, COLS;
vector<pair<int,int>> cat_locations;
map<pair<int, int>, int> solved_locations;
int solve(int x, int y){
    pair<int, int> key = make_pair(x, y);
    // x and y are our current coordinates
    // base case when we are at the bottom right corner
    if (x == ROWS and y == COLS){
        // if we are at destination
        return 1;
    }
    if (find(cat_locations.begin(), cat_locations.end(), key) != cat_locations.end()){
        // if we are in a cell with a cat, there are no
        // valid routes, therefore we return 0
        return 0;
    }
    if (solved_locations.find(key) != solved_locations.end()){
        // if we are in a cell with a cat, there are no
        // valid routes, therefore we return 0
        return solved_locations[key];
    }
    // create local total
    int total = 0;

    // if it has not reach the bottom row
    if (x != ROWS){
        total += solve(x + 1, y);
    }
    // if it has not reach the rightmost column
    if (y != COLS){
        total += solve(x, y + 1);
    }
    // return the culumative total

    solved_locations[key] = total;
    return total;
}

signed main(){
    definitely_neccessary_code;
    // take in rows and columns
    cin >> ROWS >> COLS;
    // create variables number of cats and 2 temporary variables
    int numCats, t1, t2;
    // list stores the x, y location of all the cats
    cin >> numCats;
    for (int i = 0; i < numCats; i++){
        // storing all cats into vector pair
        cin >> t1 >> t2;
        cat_locations.push_back(make_pair(t1, t2));
    }
    cout << solve (1,1) << "\n";
}
