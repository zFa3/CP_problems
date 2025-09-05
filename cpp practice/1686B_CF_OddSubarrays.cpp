/*
ID: zFa3
TASK: Odd Subarrays
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b = 1, c = 0;
    cin>>a;
    vector<ll> arr(a);
    for (size_t i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    while(b<arr.size()){
        if (arr[b] < arr[b - 1]){
            b++;c++;
        }
        b++;
    }
    cout<<c<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}