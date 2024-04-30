/*
ID: zFa3
TASK: 977A
LANG: C++                 
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        if (to_string(n)[(to_string(n).length()) - 1] == '0'){
            n = n / 10;
        } else {
            n -= 1;
        }
    }
    cout << n << endl;
    return 0;
}