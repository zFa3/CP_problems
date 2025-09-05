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
#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);
#pragma GCC optimize("O3")

using namespace std;

int solve(){
    int n, m;
    cin >> n >> m;
    int prefix_sum[n];
    for (int j = 0; j < n; j++){
        string temp;
        cin >> temp;
        prefix_sum[j] = (j==0?0:prefix_sum[j-1]) + temp.size();
    }
    for (int j = 0; j < n; j++){
        if (prefix_sum[j] > m){
            return j;
        }
    }
    return n;
}

signed main(){
    int x;
    cin >> x;
    For (x){
        cout << solve() << "\n";
    }
}
