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

bool sortComp(pair<int, int> a, pair<int, int> b){
    return a.first == b.first ? a.second < b.second : a.first > b.first;
}

signed main() {
    // 4 6
    // 1 0 1 0 1 1
    // 1 1 0 1 0 0
    // 1 1 1 0 0 0
    // 1 0 1 0 1 0
    int x, y, z;
    cin >> x >> y;
    vector<pair<int, int>> votes(y);
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            votes[j].second = j;
            cin >> z;
            votes[j].first += z;
        }
    }
    sort(votes.begin(), votes.end(), sortComp);
    
    for (auto i : votes){
        cout << i.second + 1 << (i == *(votes.end()-1) ? "" : " ");
    }
    cout << "\n";
}
