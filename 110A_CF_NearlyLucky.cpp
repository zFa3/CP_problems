/*
ID: zFa3
TASK: Nearly Lucky
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int luckyCount = 0;
    std::string number;
    cin >> number;
    for (char& c : number){
        if (c == '7' || c == '4'){
            luckyCount += 1;
        }
    }
    if (luckyCount == 7 || luckyCount == 4){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}