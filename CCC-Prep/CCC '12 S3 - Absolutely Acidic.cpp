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

#define number first
#define count second

using namespace std;

bool sorter(pair<int, int>& p1, pair<int, int>& p2){
    return p1.second > p2.second;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    unordered_map<int, int> arr;
    int length, temp;
    cin >> length;
    For (length){
        cin >> temp;
        arr[temp]++;
    }
    
    vector<pair<int, int>> vec;
    
    for (auto& itm : arr){
        vec.push_back(itm);
    }
    
    sort(vec.begin(), vec.end(), sorter);
    
    int secondMax = vec[1].count;
    pair<int, int> minmax = mp(1e9, -1e9);
    for (int i = 1; i < vec.size(); ++i){
        if (vec[i].count < secondMax){
            break;
        } else {
            minmax = mp(min(minmax.first, vec[i].number), max(minmax.second, vec[i].number));
        }
    }
    cout << max(max(abs(minmax.first - vec[0].number), abs(minmax.second - vec[0].number)), vec[0].count == vec[1].count ? abs(minmax.first - minmax.second) : -1);
    
}
