/*
ID: zFa3
TASK: Large Addition
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

string solution(){
    string integer;
    cin>>integer;
    if (integer[0]!='1'){
        return "NO";
    }
    if (integer[integer.size()-1]=='9'){
        return "NO";
    }
    for (int i=0;i<integer.length()-1;i++){
        if (integer[i]=='0'){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    ll t;
    cin>>t;

    while(t--){
        cout<<solution()<<"\n";
    }
}