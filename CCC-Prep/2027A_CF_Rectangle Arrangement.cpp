#include <bits/stdc++.h>
// #define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test; cin >> test;
    for (int i = 0; i < test; i++){
        int stamps; cin >> stamps;
        int x, y; int maximum_x = -1, maximum_y = -1;
        for (int j = 0; j < stamps; j++){
            cin >> x >> y;
            maximum_x = max(maximum_x, x);
            maximum_y = max(maximum_y, y);
        }
        cout << 2 * (maximum_y + maximum_x) << "\n";
    }
}
