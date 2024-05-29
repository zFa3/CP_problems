/*
ID: zFa3
TASK: Rudonf and 121
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    vector<ll> arr;
    ll a, b;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        arr.push_back(b);
    }
    for (int i=0;i<arr.size()-2;i++){
        if (arr[i] < 0){
            cout << "NO" << "\n"; return;
        }
        b = arr[i];
        arr[i] = 0;
        arr[i+1] -= 2*b;
        arr[i+2] -= b;
    }
    for (auto num:arr){
        if (num != 0){
            cout << "NO" << "\n"; return;
        }
    }
    cout << "YES" << "\n"; return;
}

int main(){
    ll t; cin>>t;
    while(t--)
    {
        solution();
    }
}