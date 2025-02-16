#include <bits/stdc++.h>
#define int long long

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define REV(a) reverse(a.begin(), a.end())
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair

// speed
#pragma GCC optimize("O3")

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int maxWeight;
    cin >> maxWeight;
    int cars, car, total = 0;
    queue<int> bridge;
    For (4) bridge.push(0);
    cin >> cars;
    For (cars){
        cin >> car;
        total += car;
        bridge.push(car);
        total -= bridge.front();
        bridge.pop();
        if (total > maxWeight){
            cout << i << "\n";
            return 0;
        }
    }
    cout << cars << "\n";
    return 0;
}