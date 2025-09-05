/*
ID: zFa3
DATE: 2024-10-01 21:35:06
TASK: Books
LANG: C++
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);


signed main(){
    zFa3
    int x, y;
    cin >> x >> y;
    vector<int> ct(x);
    for (int& it : ct){
        cin >> it;
    }
    int mc = 0, mxm = 0, sum = 0;
    for (int i = 0; i < x; i++){
        while (mc < x and sum + ct[mc] <= y){
            sum += ct[mc]; mc++;
        }
        sum -= ct[i];
        mxm = max(mxm, mc - i + 1);
    }
    cout << mxm - 1;
}
