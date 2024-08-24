/*
ID: zFa3
TASK:
LANG: C++
*/

#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, l;
    double maxd = 0;
    cin>>t>>l;
    vector<int> arr(t);
    while (t--){cin>>arr[t];}
    sort(arr.begin(), arr.end());
    maxd = max(arr[0], (int)l - *(arr.end() - 1));
    for (ll m=0;m<arr.size(); m++){
        if (m != 0){
            maxd = max((double)maxd, (double)(arr[m] - arr[m - 1])/2);
        }
    }
    cout<<setprecision(10)<<maxd;
}