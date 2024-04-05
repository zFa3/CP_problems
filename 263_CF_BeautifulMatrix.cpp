#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int calculate_dist(int index) {
    const int rw = 2, cl = 2;
    int r = floor(index / 5), c = index % 5;
    return abs(rw - r) + abs(cl - c);
}

int main(){
    int matrix[25], index;
    for (int i = 0; i < 25; i++) {
        cin >> matrix[i];
    }
    for (int i = 0; i < 25; i++) {
        if (matrix[i] == 1) {
            index = i;
        }
    }
    cout << calculate_dist(index);
    return 0;
}