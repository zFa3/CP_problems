/*
ID: zFa3
TASK: Xenia and Ringroad
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n, m, prev = -1, current, dips = 0;
    cin>>n>>m;
    for (size_t i = 0; i < m; i++)
    {
        cin>>current;
        if (current < prev){
            dips++;
        }
        prev = current;
    }
    cout<<dips*(n)+(current-1)<<endl;    
}