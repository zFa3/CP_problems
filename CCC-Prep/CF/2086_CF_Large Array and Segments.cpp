#include <bits/stdc++.h>
#define int long long
using namespace std;

int sol(){
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> array_a(n);
    int s = 0;
    for (int j = 0; j < n; j++){
        cin >> array_a[j];
        s += array_a[j];
    }
    int segments = x / s;
    
    if (x > s * k){
        return 0;
    }
    
    if (x % s == 0){
        // s is factor of x
        return (k - segments) * n + 1;
    }
    
    int array_sum = 0;
    for (int i = n - 1; i > -1; i--){
        array_sum += array_a[i];
        if (array_sum + segments * s >= x){
            // 1 2 3 4
            // 11 (11 11)
            return (k - segments) * n - (n - 1 - i);
        }
    }
    return 0;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    for (int i = 0; i < tc; i++){
        cout << sol() << "\n";
    }
}
