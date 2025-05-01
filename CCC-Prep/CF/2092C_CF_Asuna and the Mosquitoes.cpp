#include <bits/stdc++.h>
#define int long long // ~ 10 ^ 19
#define For(_) for (int i = 0; i < _; i++)
using namespace std;

int sol(){
    int numbers, t, max_even = 0;
    cin >> numbers;
    int even_count = 0;
    int odd_count = 0;
    int sum = 0, maximum = -1;
    For (numbers){
        cin >> t;
        sum += t;
        maximum = max(maximum, t);
        if (t % 2 == 0){
            even_count++;
        } else {
            odd_count++;
        }
    }
    if (even_count == 0 or odd_count == 0){
        return maximum;
    } else {
        return sum - (odd_count - 1);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    For (tc){
        cout << sol() << "\n";
    }
}
