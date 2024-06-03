/*
ID: zFa3
TASK: Biytshifts
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    string binary;
    ll p1=-1, p2=0;
    bool p=true;
    cin>>binary;
    for (int i=0;i<binary.length();i++){
        if (binary[i]=='1'&&p){
            p1=i;
            p=false;
        } else if (p1!=-1&&binary[i]=='0') {
            p2+=(i-p1+1);
            p1++;
        } else if (binary[i]=='0') {
            p=true;
        }
    }
    cout<<p2<<"\n";
}

int main(){

    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}