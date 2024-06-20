/*
ID: zFa3
TASK: A. Bazoka and Mocha's Array
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

string solution(){
    bool single = false;
    ll a, b;
    cin>>a;
    vector<ll> arr;
    for (ll i = 0; i < a; i++)
    {
        cin>>b;
        arr.push_back(b);
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i]>arr[(i+1)%arr.size()]){
            if (not single){
            single=true;
            } else {
                return "NO";
            }
        }
    }
    return "YES";
        
}

int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        cout<<solution()<<"\n";
    }
}