/*
ID: zFa3
*/

#include <bits/stdc++.h>
#define ll long long

#define debug(x) cout << "DEBUG    " << x << "\n";
#define print(x) cout << x << "\n";
#define cout_vec(x) for (auto &i : x) cout << i << "\n";
#define cout_vpair(x) for (auto &i : x) cout << i.first << ' ' << i.second << "\n";
using namespace std;

#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for (int i = a; i < b; i += c)
#define SUM(a, b) accumulate(a, b, 0LL)
#define MAX(a) max_element(a.begin(), a.end())
// use * to get value of MAX
#define all(x) x.begin(), x.end()

#define mp make_pair
#define MOD (int)1e8
#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);
#pragma GCC optimize("O3")

const auto start = std::chrono::high_resolution_clock::now();
double get_time(){ return std::chrono::duration<double>(std::chrono::high_resolution_clock::now()-start).count(); }

signed main(){
    zFa3
    int x;
    cin >> x;
    For(x){
        int a, b, c, d;
        cin >> a >> b;
        vector<int> shelves(b+1);
        For(b){
            cin >> c >> d;
            shelves[c] += d;
        }
        SORT(shelves);
        reverse(all(shelves));
        int shelfs = min(a, b);
        cout << SUM(shelves.begin(), shelves.begin() + shelfs) << "\n";
    }
}
