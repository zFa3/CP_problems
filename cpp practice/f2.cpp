/*
ID: zFa3
TASK: Removals game
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
using namespace std;

bool check(){
    int length;
    cin>>length;
    vector<int> alice(length), bob(length);
    for (int i = 0; i < length; i++){
        cin>>alice[i];
    }
    for (int i = 0; i <  length; i++){
        cin>>bob[i];
    }
    bool comp = true;
    bool reverse = true;
    for (int i = 0; i < length; i++){
        if (alice[i] != bob[length - i - 1]) {reverse = false;}
        if (alice[i] != bob[i]) {comp = false;}
        //cout<<bob[i]<<i<<"\n";
    }
    //cout<<comp<<" "<<reverse<<"\n";
    return not (comp or reverse);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        cout<<(check() ? "Alice\n" : "Bob\n");
    }
}