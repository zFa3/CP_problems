/*
ID: zFa3
TASK: [AtCoder Educational DP contest] - Vacation
DATE: 2024-09-12
LANG: C++
*/

#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin >> t;

    vector<int> dp(t * 3, 0);
    vector<int> numbers(t * 3);
    

    vector<int> activity_a(t);
    vector<int> activity_b(t);
    vector<int> activity_c(t);

    for (size_t i = 0; i < t; i++)
    {
        cin >> activity_a[i];
        cin >> activity_b[i];
        cin >> activity_c[i];
    }
    
    dp[0] = activity_a[0];
    dp[1] = activity_b[0];
    dp[2] = activity_c[0];

    for(int i = 1; i < t; i++){
        dp[3*i] = activity_a[i] + max(dp[(i - 1) * 3 + 1], dp[(i - 1) * 3 + 2]);
        dp[3*i+1] = activity_b[i] + max(dp[(i - 1) * 3], dp[(i - 1) * 3 + 2]);
        dp[3*i+2] = activity_c[i] + max(dp[(i - 1) * 3 + 1], dp[(i - 1) * 3]);
    }

    cout << max({dp[dp.size() - 1], dp[dp.size() - 2], dp[dp.size() - 3]}) << "\n";
}