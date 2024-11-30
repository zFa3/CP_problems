#include <bits/stdc++.h>

#define mp make_pair
#define For(x) for (int i = 0; i < x; i++)
#define int long long
#define print(x) cout << x;

using namespace std;

signed main(){
    int t;
    cin >> t;
    For(t){
        string expr;
        cin >> expr;
        if (expr[0] > expr[2]){
            print(expr[0])
            print('>')
            print(expr[2]);
        } else if (expr[0] < expr[2]) {
            print(expr[0])
            print('<')
            print(expr[2]);
        } else {
            print(expr[0])
            print('=')
            print(expr[2]);
        }
        print("\n")
    }
}
