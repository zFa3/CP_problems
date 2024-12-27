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
    int len;
    cin >> len;
    int suml = 0;
    int sumr = 0;
    For (len){
        int temp;
        cin >> temp;
        if (i % 2 == 0){
            suml += temp;
        } else {
            sumr += temp;
        }
    }
    int evens = suml / ((len / 2) + (len % 2 == 0 ? 0 : 1));
    double odds = sumr / (double)(len / 2);
    int odd = sumr / (len / 2) == odds ?  sumr / (len / 2) : -1;
    bool even = evens * ((len / 2) + (len % 2 == 0 ? 0 : 1)) == (suml);
    return (evens == odds) and even;
}

signed main(){
    int x;
    cin >> x;
    For (x){
        cout << (solve() ? "YES\n" : "NO\n");
    }
}
