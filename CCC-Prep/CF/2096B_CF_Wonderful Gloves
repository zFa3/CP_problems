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
    int total, minimum;
    cin >> total >> minimum;
    vector<int> left(total);
    vector<int> right(total);
    For (total){
        cin >> left[i];
    }
    For (total){
        cin >> right[i];
    }
    int answer = 0;
    vector<int> s;
    For (total){
        answer += max(left[i], right[i]);
        s.push_back(min(left[i], right[i]));
    }
    SORT(s);
    For (minimum - 1){
        answer += s[total - i - 1];
    }
    return answer + 1;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    For (tc){
        cout << sol() << "\n";
    }
}
