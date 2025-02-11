#include <bits/stdc++.h>
#define int long long

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define REV(a) reverse(a.begin(), a.end())
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair

// speed
#pragma GCC optimize("O3")

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int length, edges = 0;
    cin >> length;
    vector<bool> top(length);
    vector<bool> bottom(length);
    char chr;
    For (length){
        cin >> chr;
        top[i] = (chr == '1');
    }
    For (length){
        cin >> chr;
        bottom[i] = (chr == '1');
    }
    bool duplicate = false;
    for (auto i : top){
        edges += 3 * i;
        edges -= duplicate * i * 2;
        duplicate = i;
    }
    duplicate = false;
    for (auto i : bottom){
        edges += 3 * i;
        edges -= duplicate * i * 2;
        duplicate = i;
    }
    For (length){
        if (top[i] and bottom[i] and !(i % 2))
            edges -= 2;
    }
    cout << (edges) << "\n";
}
