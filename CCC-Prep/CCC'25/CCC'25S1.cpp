#include <bits/stdc++.h>
#define int long long
#define For(x) for (int _ = 0; _ < x; _++)
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(2 * ((a + c) + max(b, d)), 2 * ((b + d) + max(a, c))) << "\n";
}
