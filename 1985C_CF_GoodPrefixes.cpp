/*
ID: zFa3
TASK: Good Prefixes
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sum(a) accumulate(a.begin(), a.end(), 0LL)
#define Max(x) max_element(x.begin(), x.end())

void solution(){
    ll a, b, total = 0, sum = 0, maximum = -1e9;
    cin>>a;
    for (size_t i = 0; i < a; i++)
    {
        cin>>b;
        maximum = max(b, maximum);
        sum += b;
        if (sum == maximum * 2){
            total++;
        }
    }
    cout<<total<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}