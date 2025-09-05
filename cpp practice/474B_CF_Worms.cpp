/*
ID: zFa3 + ZZ-
DATE: 2024-09-07 21:57:41
TASK: Worms
LANG: C++
*/

#include <bits/stdc++.h>

#define ll long long
using namespace std;

vector<int> arr;
vector<int> prefix_sum = {0};

ll find_bucket(int n){
    // binary search
    ll p1 = 0;
    ll p2 = prefix_sum.size() - 1;
    while (p1 <= p2){
        ll center = (p1 + p2) / 2;
        if (n <= prefix_sum[center + 1] and n > prefix_sum[center]){ return center; }
        if (n > prefix_sum[center]){
            p1 = center + 1;
        } else {
            p2 = center - 1;
        }
    }
    // this should never happen
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll count, count2, temp;
    ll query;
    cin >> count;
    for (size_t i = 0; i < count; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    ll total = 0;
    for (size_t i = 0; i < count; i++){
        total += arr[i];
        prefix_sum.push_back(total);
    }
    cin >> count2;
    for (size_t i = 0; i < count2; i++){
        cin >> query;
        cout << find_bucket(query) + 1 << "\n";
    }
}