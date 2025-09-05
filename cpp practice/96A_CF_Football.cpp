/*
ID: zFa3
TASK: Football
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string binary;
    int counter = 1, m = 1;
    cin >> binary;
    for (int i = 1; i < (binary.length()); i++){
        if (binary[i] == binary[i - 1]){
            counter += 1;
        } else {
            m = max(m, counter);
            counter = 1;
        }
    }
    m = max(m, counter);
    if (m > 6){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}