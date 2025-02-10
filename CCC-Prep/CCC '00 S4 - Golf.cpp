#include <bits/stdc++.h>
#define int long long

#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define REV(a) reverse(a.begin(), a.end())
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair
#pragma GCC optimize("O3")

using namespace std;

int dist, clubCount;
int solve(vector<int> &clubs){
    vector<int> green(5381, 1e6);
    green[0] = 0;
    for (int i = 0; i < 5281; i++){
        for (int j = 0; j < clubCount; j++){
            if (i + clubs[j] < 5380)
                green[i + clubs[j]] = min(green[i] + 1, green[i + clubs[j]]);
        }
    }
    return green[dist];
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> dist >> clubCount;
    vector<int> clubs(clubCount);
    For (clubCount){
        cin >> clubs[i];
    }
    
    auto ans = solve(clubs);
    cout << (ans != 1e6 ? "Roberta wins in " + to_string(ans) + " strokes.\n" : "Roberta acknowledges defeat.\n");
}
