/*
ID: zFa3
TASK: Division?
LANG: C++
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
#include <queue>
#include <set>

#define ll long long
#define pr(x) cout<<"Division "<<x<<"\n";
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, rating;
    // number of test cases and the rating of each contestant
    cin>>t;
    while(t--){
        cin>>rating;
        if (rating < 1400){pr(4);}
        else if (rating < 1600) {pr(3);}
        else if (rating < 1900) {pr(2);}
        else {pr(1);}
    }
}