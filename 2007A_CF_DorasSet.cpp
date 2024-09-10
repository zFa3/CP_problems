/*
ID: zFa3 + ZZ-
DATE: 2024-09-09 21:43:10
TASK: Dora's Set
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll d,e,count,val;
    cin >> d >> e;
    if (d % 2 == 0) d++;
    if (e % 2 == 0) e--;
    val = ceil((e-d)/(double)4);
    cout << val << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t = 1;
    cin>>t;

    for(int i = 0; i < t; i++){
        solution();
    }
}
