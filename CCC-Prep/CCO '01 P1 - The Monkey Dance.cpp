#include <bits/stdc++.h>
#define int long long

using namespace std;

int run_round(int start_circle, unordered_map<int, int> orders){
    int length_of_path = 1;
    int current = orders[start_circle];
    while (current != start_circle){
        length_of_path++;
        current = orders[current];
    }
    return length_of_path;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int monkeys = 0;
    cin >> monkeys;
    unordered_map<int, int> orders;
    while (monkeys != 0){
        for (int _ = 0; _ < monkeys; _++){
            int x, y; cin >> x >> y;
            orders[x] = y;
        }
        int lcm_c = 1;
        for (int i = 1; i < monkeys + 1; i++){
            lcm_c = lcm(lcm_c, run_round(i, orders));
        }
        cout << lcm_c << "\n";
        cin >> monkeys;
    }
}
