/*
ID: zFa3
TASK: Anton and Danik
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    std::string winners;
    int a_w = 0, d_w = 0, a;
    cin >> a >> winners;
    for (char& c : winners){
        if (c == 'A'){
            a_w += 1;
        } else {
            d_w += 1;
        }
    }
    if (a_w == d_w){
        cout << "Friendship";
    } else if (a_w > d_w){
        cout << "Anton";
    } else {
        cout << "Danik";
    }
    return 0;
}