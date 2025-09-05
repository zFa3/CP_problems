#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int a, b, max_dominoes;
    cin >> a >> b;
    if (a % 2 == 1) {
        max_dominoes = (a - 1) * b / 2;
        max_dominoes += floor(b / 2);
    } else {
        max_dominoes = a * b / 2; 
    }
    cout << max_dominoes << endl;
    return 0;
}