#include <bits/stdc++.h>

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair
#pragma GCC optimize("O3")

using namespace std;
typedef long long ll;

bool solve(){
    int N, K;
    cin >> N;
    vector<int> arr;
    vector<int> track;
    For (N){
        cin >> K;
        arr.push_back(K);
    }
    reverse(arr.begin(), arr.end());
    int counter = 0;
    while (arr.size() || track.size()) {
        if (arr.size()) {
            int t = arr[0];
            if (t != counter + 1) {
                if (track.size()) {
                    if (track.back() == counter + 1) {
                        track.pop_back();
                        counter++;
                    } else {
                        track.push_back(t);
                        arr.erase(arr.begin());
                    }
                } else {
                    track.push_back(t);
                    arr.erase(arr.begin());
                }
            } else {
                arr.erase(arr.begin());
                counter++;
            }
        } else if (track.size()) {
            if (track.back() == counter + 1) {
                track.pop_back();
                counter++;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    For (t){
        cout << (solve() ? "Y\n" : "N\n");
    }
}
