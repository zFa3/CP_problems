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

int z;
vector<vector<int>> solutions;
void answer(int g, vector<int> arr, int minimum){
    if (g == 1 and arr.size() > z){return;}
    if (arr.size() <= z and g == 0){solutions.push_back(arr);}
    for (int j = 0; j < g; j++){
        if (g - j <= minimum){
            arr.push_back(g - j);
            answer(j, arr, g - j);
            arr.pop_back();
        }
    }
}

signed main() {
    cin >> z;
    answer(z, {}, 1e9);
    for (auto itm : solutions){
        for (int i = 0; i < itm.size(); i++){
            cout << itm[i] << (i == itm.size() - 1 ? "\n" : " ");
        }
    }
}
