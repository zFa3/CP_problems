/*
ID: zFa3
TASK: A. Thorns and Coins
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solution(){
    string a;
    ll b, d=0;
    cin>>b;
    cin>>a;
    bool tg=false;
    for (size_t i = 0; i < a.length(); i++)
    {
        if (a[i]=='*'){
            if (tg){
                return d;
            } else {
                tg=true;
            }
        } else if (a[i]=='@'){
            d++;
            tg=false;
        } else {
            tg=false;
        }
    }
    return d;
    
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        cout<<to_string(solution())<<"\n";
    }
}