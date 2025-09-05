/*
ID: zFa3
TASK: Choosing Cubes
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll n, f, k, x, y, z=0;
    cin>>n>>f>>k;
    vector<int> arr;
    for (int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    y=arr[f-1];
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    for (int i=0;i<k;i++){
        if (arr[i]==y){
            z++;
        }
    }
    if (z==0){
        cout<<"NO"<<"\n";
    } else if (z==count(arr.begin(), arr.end(), y)){
        cout<<"YES"<<"\n";
    } else {
        cout<<"MAYBE"<<"\n";
    }
}

int main(){
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}