#include <bits/stdc++.h>
#define int long long // ~ 10 ^ 19
#define For(_) for (int i = 0; i < _; i++)

#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())

using namespace std;

int sol(){
    string a, b;
    cin >> a >> b;
    vector<int> ac, bc;
    int count = 1;
    char prev = ' ';
    For (a.size()){
        if (prev == a[i]){
            count++;
        } else {
            ac.push_back(count);
            count = 1;
        }
        prev = a[i];
    }
    ac.push_back(count);
    
    count = 1;
    prev = ' ';
    For (b.size()){
        if (prev == b[i]){
            count++;
        } else {
            bc.push_back(count);
            count = 1;
        }
        prev = b[i];
    }
    bc.push_back(count);
    
    if (ac.size() != bc.size()){
        return false;
    }
    
    For (ac.size()){
        if (not (bc[i] <= 2 * ac[i] and bc[i] >= ac[i])){
            return false;
        }
    }
    return a[0] == b[0];
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    For (tc){
        cout << (sol() ? "YES" : "NO") << "\n";
    }
}
