/*
ID: zFa3
TASK: Manhattan Circle
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b;
    cin>>a>>b;
    vector<char> manhattan;
    for (int i=0;i<a*b;i++){
        char c;
        cin>>c;
        manhattan.push_back(c);
    }
    string str="#";
    ll center=((ll)(std::find(manhattan.begin(), manhattan.end(), '#')-manhattan.begin())+(ll)(std::find_end(manhattan.begin(), manhattan.end(), str.begin(), str.end())-manhattan.begin()))/2;
    ll r=(center/b)+1;
    ll c=(center%b)+1;
    cout<<r<<" "<<c<<"\n";
}

int main(){
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}