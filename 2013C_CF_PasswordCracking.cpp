/*
ID: zFa3
DATE: 2024-10-05
TASK:
LANG: C++
*/

#include <bits/stdc++.h>
#define int long long
using namespace std;

void solution(){
    int n;
    cin >> n;
    string guess = "";
    bool wa = false;
    // we guess the prefix
    int ans = true;
    while (guess.size() < n){
        if (!wa){
            cout << "? " << guess + "0" << endl;
            cout.flush();
            cin >> ans;
            if (ans == 1){
                guess += "0";
            } else {
                wa = true;
            }
        } else {
            cout << "? " << guess + "1" << endl;
            cout.flush();
            cin >> ans;
            if (ans == 1){
                guess += "1";
                wa = false;
            } else {
                // once neither 0 or 1 added to the end
                // are a part of string s, then we know weve hit
                // the end and we have to add to the start of the string
                // instead
                // so we break
                break;
            }
        }
    }
    // now we start to add numbers to the
    // start of the string., since we know the
    // string is equal to the end of the desired str
    while (n - guess.size() > 0){
        cout << "? " << "0" + guess << endl;
        cout.flush();
        cin >> ans;
        if (ans == 1){
            guess = "0" + guess;
        } else {
            guess = "1" + guess;
        }
    }
    cout << "! " << guess << endl;
    cout.flush();
}

signed main(){
    int x;
    cin >> x;
    while (x--){
        solution();
    }
}

// 10110
