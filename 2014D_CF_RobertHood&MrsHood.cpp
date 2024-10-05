/*
ID: zFa3
DATE: 2024-10-01 19:44:34
TASK: _____________________
LANG: C++
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) max_element(a.begin(), a.end())
#define pb push_back

#define all(x) x.begin(), x.end()
#define f firsrt
#define s second

#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);

void solution(){
    int x, y, z;
    cin >> x >> y >> z;
    int t1, t2;
    // one indexed
    vector<int> days(x + 2);
    for (int i = 0; i < z; i++){
        cin >> t1 >> t2;
        // add one since the activities are
        // inclusive, (includes both start/end days)
        days[max(1LL, t1 - y + 1)]++;
        days[t2 + 1]--;
    }
    cout << endl;
    int running_total = 0;
    //                                  maximum         minimum
    vector<pair<int, int>> range = {make_pair(-1, -1), make_pair(1e9, 1e9)};
    for (int i = 1; i < x - y + 2; i++){
        running_total += days[i];
        // cout << running_total << endl;
        if (running_total < range[1].first){
            range[1].first = running_total;
            range[1].second = i;
        }
        if (running_total > range[0].first){
            range[0].first = running_total;
            range[0].second = i;
        }
    }
    cout << range[0].second << ' ' << range[1].second << "\n";
}

signed main(){
    zFa3
    int a;
    cin >> a;
    while (a--){
        solution();
    }
}
