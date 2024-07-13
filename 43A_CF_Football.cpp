/*
ID: zFa3
TASK: Football
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a;
    ll counter = 1;
    cin>>a;
    string string1, string2, string3;
    cin>>string1;
    for (size_t i = 0; i < a-1; i++)
    {
        cin>>string2;
        if (string2 == string1){
            counter++;
        } else {
            string3 = string2;
        }
    }
    if (counter > a/2){
        cout<<string1;
    } else{
        cout<<string3;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solution();
}