/*
ID: zFa3
TASK: Creating Words
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    string a, b;
    cin>>a>>b;
    cout<<b[0];
    for (int i=1;i<3;i++){
        cout<<a[i];
    }
    cout<<" "<<a[0];
    for (int i=1;i<3;i++){
        cout<<b[i];
    }
    cout<<"\n";
}

int main(){
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}