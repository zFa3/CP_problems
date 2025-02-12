#include <bits/stdc++.h>
#define int long long

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair

// speed
#pragma GCC optimize("O3")

using namespace std;
vector<int> motels = {0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000};
int n, t;
int lower, upper;
unordered_map<int, int> memo;
int solve(int motel){
    if (motels[motel] == 7000){
        return 1;
    }
    if (memo.find(motel) != memo.end()){
        return memo[motel];
    }
    int total = 0;
    for (int i = motel + 1; i < motels.size(); i++){
        int newMotel = motels[i];
        auto diff = newMotel - motels[motel];
        if (diff >= lower and diff <= upper){
            total += solve(i);
        }
    }
    memo[motel] = total;
    return total;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin >> lower >> upper;
    cin >> n;
    For (n){
        cin >> t;
        motels.push_back(t);
    }
    sort(motels.begin(), motels.end());
    cout << solve(0) << "\n";
    // 0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4960, 4970, 5030, 5990, 6010, 7000
}
