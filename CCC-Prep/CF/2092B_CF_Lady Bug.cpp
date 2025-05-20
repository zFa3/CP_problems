#include <bits/stdc++.h>
#define int long long // ~ 10 ^ 19

#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())

using namespace std;

string sol(){
    int t;
    cin >> t;
    string b;
    int even = 0, odd = 0;
    cin >> b;
    For (t){
        even += (b[i] == '1') * (i % 2);
        odd += (b[i] == '1') * !(i % 2);
    }
    cin >> b;
    For (t){
        odd -= (b[i] == '0') * (i % 2);
        even -= (b[i] == '0') * !(i % 2);
    }
    return ((max(odd, 0LL) + max(even, 0LL) == 0) ? "YES" : "NO");
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    For (tc){
        cout << sol() << "\n";
    }
}
