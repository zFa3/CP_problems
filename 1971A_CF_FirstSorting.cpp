/*
ID: zFa3
TASK: First Sorting
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> b >> c;
        if (b > c){
            cout << c << " " << b << endl;
        } else {
            cout << b << " " << c << endl;
        }
    }
    return 0;
}