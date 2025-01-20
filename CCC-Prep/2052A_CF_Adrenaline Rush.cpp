#include <bits/stdc++.h>
#define int long long

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())

// syntax
#define mp make_pair

// other macros
#define MOD (int)1e8

// speed
#pragma GCC optimize("O3")

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int count;
    cin >> count;
    vector<int> arr(count);
    vector<int> temp(count);
    For (count){
        cin >> arr[i];
    }
    int counter = 0;
    for (int i = 0; i < count; i++){
        for (int j = i + 1; j < count; j++){
            if (arr[i] > arr[j]){
                counter++;
            } else {
                counter += 2;
            }
        }
    }
    cout << counter << "\n";
    for (int i = 0; i < count; i++){
        for (int j = i + 1; j < count; j++){
            cout << j + 1 << " " << i + 1 << "\n";
        }
        temp[i] = count - i;
    }
    while (temp != arr){
        for (int i = 0; i < count - 1; i++){
            int index1 = find(arr.begin(), arr.end(), temp[i]) - arr.begin();
            int index2 = find(arr.begin(), arr.end(), temp[i+1]) - arr.begin();
            if (index1 > index2){
                cout << temp[i + 1] << ' ' << temp[i] << "\n";
                auto v = temp[i];
                temp[i] = temp[i + 1];
                temp[i + 1] = v;
            }
        }
    }
    // 4 3 2 1
    // 3 4 1 2
    // 3 4 1 2
    // 3 1 4 2
}
