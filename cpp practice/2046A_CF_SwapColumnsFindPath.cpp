// zFa3
#include <bits/stdc++.h>
#define int long long

// debug
#define debug(x) cout << "DEBUG    " << x << "\n";
#define print(x) cout << x << "\n";
#define cout_vec(x) for (auto &i : x) cout << i << "\n";
#define cout_vpair(x) for (auto &i : x) cout << i.first << ' ' << i.second << "\n";
using namespace std;

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

const auto start = std::chrono::high_resolution_clock::now();
double get_time(){ return std::chrono::duration<double>(std::chrono::high_resolution_clock::now()-start).count(); }


using namespace std;

signed main(){
    zFa3
    int t, i, r, e, d;
    cin >> t;
    For (t){
        cin >> r;
        vector<int> bottom(r);
        vector<int> top(r);
        For (r){
            cin >> top[i];
        }
        For (r){
            cin >> bottom[i];
        }
        d = 0;
        e = -1e9;
        For (r){
            d += max(top[i], bottom[i]);
            e = max(e, min(top[i], bottom[i]));
        }
        print(d+e);
        print("\n")
    }
}
