#include <bits/stdc++.h>
// #define int long long

using namespace std;

bool solve(){
    int length, start = 1e9, end = -1e9;
    cin >> length;
    vector<int> integers(length + 2);
    integers[0] = -1e9;
    integers[length + 1] = 1e9;
    for (int i = 1; i < length + 1; i++){
        cin >> integers[i];
    }
    for (int i = 1; i < length + 1; i++){
        if (integers[i] > integers[i + 1]){
            start = min(start, i);
        } else if (start != 1e9 and end == -1e9){
            end = i;
        }
    }
    end = (end == -1e9? length + 1 : end);
    for (int i = 1; i < length; i++){
        if (i >= start and i < end){
            // reverse section
            if (integers[i] < integers[i + 1]){
                return false;
            }
        } else {
            // normal section
            if (integers[i] > integers[i + 1]){
                return false;
            }
        }
    }
    if (start == 1e9){
        cout << "yes\n1 1\n";
        return true;
    }
    if (integers[start] < integers[end + 1] and integers[end] > integers[start - 1]){
        cout << "yes\n" << start << ' ' << end << "\n";
        return true;
    }
    return false;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << (solve() ? "":"no");
}
