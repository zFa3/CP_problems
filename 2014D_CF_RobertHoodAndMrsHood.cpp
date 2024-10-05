/*
ID: zFa3
DATE: 2024-10-05
TASK:
LANG: C++
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);

void solution(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> psum_s(a+1, 0);
    vector<int> psum_e(a+1, 0);
    int t1, t2;
    while(c--){
        cin >> t1 >> t2;
        t1--; t2--;
        // 0 0 0 0 0
        // 0 1 2 3 4
        // 1 2 3 4 5
        psum_s[t1]++;
        psum_e[++t2]--;
    }
    int r_total = 0;
    int s_total = 0;
    for (int i = 0; i < a; i++){
        // prefix sum
        r_total += psum_e[i];
        psum_e[i] = r_total;
        // prefix sum
        s_total += psum_s[i];
        psum_s[i] = s_total;
    }
    pair<int, int> minimum = make_pair(1e9, 1e9);
    pair<int, int> maximum = make_pair(-1e9, -1e9);
    for (int i = b; i < a+1; i++){
        int value = psum_s[i-1] + psum_e[i-b];
        // cout << value << endl;
        // int value = psum_s[i] - psum_e[i-b];
        if (value > maximum.first){
            maximum.first = value;
            maximum.second = i-b+1;
        }
        if (value < minimum.first){
            minimum.first = value;
            minimum.second = i-b+1;
        }
    }
    // 122111221
    // -22312222
    cout << maximum.second << ' ' << minimum.second << '\n';
}

signed main(){
    zFa3
    int x;
    cin >> x;
    while (x--){
        solution();
    }
}
