/*
ID: zFa3
TASK: Translation
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

void solution(){
    std::string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
        int c = (a.size() - i) - 1;
        if (a[i] != b[c]){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
    return;
}

int main(){
    solution();
    return 0;
}