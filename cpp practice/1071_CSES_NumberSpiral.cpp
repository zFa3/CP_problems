/*
ID: zFa3
DATE: 2024-09-09 09:27:11
TASK: Number Spiral
LANG: C++
*/

// #include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include <algorithm>

using namespace std;
#define ll long long

ll solution(){
    ll x, y;
    cin >> y >> x;

    // + 2
    // + 11
    // + 19
    // + 26

    // 1  2  9  10 25 26
    // 4  3  8  11 24 27
    // 5  6  7  12 23 28
    // 16 15 14 13 22 29
    // 17 18 19 20 21 30
    // 36 35 34 33 32 31

    // 170550340 943050741
    // 889344699930098742
    // 889344699930098688

    if (x >= y){
        if (x % 2 == 1){
            return  x * x - y + 1;
        } else {
            return (x - 1) * (x - 1) + y;
        }
    } else {
        if (y % 2 == 0){
            return (y) * (y) - x + 1;
        } else {
            return (y - 1) * (y - 1) + x;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll count;
    cin >> count;
    
    for (size_t i = 0; i < count; i++)
    {
        cout << solution() << "\n";
    }

    return 0;
}