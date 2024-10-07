/*
ID: zFa3
DATE: 2024-10-06
TASK:
LANG: C++
*/

#include <bits/stdc++.h>
#define int long long
#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);
#define debug(x) cout << "DEBUG\t" << x << "\n";
using namespace std;

int sum_to_x(int x){
    return (x * (x + 1)) / 2;
}

int solution(){
    int l, r;
    cin >> r >> l;
    r += l - 1;
    // the length of the array and the starting element of the array
    // (sum to center - sum to left) - (sum to right - sum to center)
    int sl = sum_to_x(l-1);
    int sr = sum_to_x(r);
    
    int answer = NULL;
    
    int center = -1;
    while ( l <= r ){
        center = (l + r) / 2;
        int val1 = (sum_to_x(center) - sl);
        int val2 = (sr - sum_to_x(center));
        if (val1 < val2){
            answer = center;
            l = center + 1;
        } else {
            r = center - 1;
        }
    }
    int sa = sum_to_x(answer) - sl;
    int sa1 = sr - sum_to_x(answer);
    
    int asa = sum_to_x(answer - 1) - sl;
    int asa1 = sr - sum_to_x(answer - 1);
    
    int bsa = sum_to_x(answer + 1) - sl;
    int bsa1 = sr - sum_to_x(answer + 1);
    // 5 3
    // 3 4 5 6 7
    // 12 - 13
    cout << min(abs(sa - sa1), min(abs(asa - asa1), abs(bsa - bsa1))) << endl;
    // cout << (sa - sl) - (sa - sr /*sr - sa*/) << '\t' << (sa1 - sl) - (sr - sa1) << endl;
    return 0;
}

signed main(){
    zFa3
    int x;
    cin >> x;
    while (x--){
        solution();
    }
}
/*
 4
 2 2
 7 2
 5 3
 1000000000 1000000000
 */
