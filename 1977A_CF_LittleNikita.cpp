/*
ID: zFa3
TASK: Little Nikita
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b;
    cin >> a >> b;
    if (a-b>=0&&(a-b)%2==0){
        std::cout<<"yes"<<"\n";
    }else{
        std::cout<<"no"<<"\n";
    }
}

int main(){

    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}