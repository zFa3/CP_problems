#include <bits/stdc++.h>
#define int long long // ~ 10 ^ 19
#define For(_) for (int i = 0; i < _; i++)
using namespace std;

int sol(){
    int height, width, desks;
    cin >> height >> width >> desks;
    int distribution = ceil(desks / (double)height);
    // binary search
    int L = 1, R = distribution + 1;
    // mid represents the length of all the segments
    int mid = -1;
    while (L <= R){
        if (L == R){
            mid = L;
            break;
        }
        mid = (L + R) / 2;
        // ignore width % mid in our maximmum since (% mid) is always less than (mid)
        if ((width / mid) * (mid - 1) + width % mid < distribution){
            // not enough capacity, increase mid
            L = mid + 1;
        } else {
            R = mid;
        }
    }
    return mid - 1;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    For (tc){
        cout << sol() << "\n";
    }
}
