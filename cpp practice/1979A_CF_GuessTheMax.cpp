/*
ID: zFa3
TASK: Guess the Maximum
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b;
    vector<int> c;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>b;
        c.push_back(b);
    }
    ll minimum=1e9;
    for (int i=0;i<c.size()-1;i++){
        minimum = min(minimum, (ll)max(c[i], c[i+1]));
    }
    cout<<minimum-1<<"\n";
}

int main(){
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}