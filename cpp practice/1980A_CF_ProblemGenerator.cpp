/*
ID: zFa3
TASK: Problem Generator
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b, t=0;
    string c;
    cin>>a>>b>>c;
    unordered_map<char, int> problems, requirements;
    for (int i=65;i<72;i++){
        problems[(char)(i)]=0;
        requirements[(char)(i)]=b;
    }
    for (char& d:c){
        problems[d]++;
    }
    for (int i=65;i<72;i++){
        requirements[(char)(i)]-=problems[(char)(i)];
        if (requirements[(char)(i)]>0){
            t+=requirements[(char)(i)];
        }
    }
    cout<<t<<"\n";
}

int main(){

    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}