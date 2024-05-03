/*
ID: zFa3
TASK: Make it White
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    std::string sequence;
    int num, seq;
    cin >> num;
    for (int i = 0; i++ < num;){
        cin >> seq >> sequence;
        int f = 1e9, l = 0;
        for (int j = 0; j < seq;j++){
            if (sequence[j] == 'B'){
                f = min(f, j);
                l = max(l, j);
            }
        }
        cout << max((l - f + 1), 1) << endl;
    }
    return 0;
}