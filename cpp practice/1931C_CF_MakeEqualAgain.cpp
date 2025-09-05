/*
ID: zFa3
TASK: Make Equal Again
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    std::vector<ll> n;
    ll a, b, c, l=1, r=0;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>b;
        n.push_back(b);
    }
    if (count(n.begin(), n.end(), n[0]) == n.size()){
        cout << 0 << "\n";
    } else {
    for (int i=1;i<n.size();i++){
        if (n[i] == n[i-1] && i<n.size()){
            l++;
        } else {
            break;
        }
    }
    reverse(n.begin(), n.end());
    for (int i=0;i<n.size();i++){
        if (n[i] == n[n.size()-1] && i<n.size()){
            r++;
        } else {
            break;
        }
    }
    c=l+r;
    l=1;
    r=0;
    for (int i=1;i<n.size();i++){
        if (n[i] == n[i-1] && i<n.size()){
            l++;
        } else {
            break;
        }
    }
    reverse(n.begin(), n.end());
    for (int i=0;i<n.size();i++){
        if (n[i] == n[n.size()-1] && i<n.size()){
            r++;
        } else {
            break;
        }
    }
    std::cout << min(n.size()-c, n.size()-(l+r))<<"\n";
    }
}

int main(){

    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}