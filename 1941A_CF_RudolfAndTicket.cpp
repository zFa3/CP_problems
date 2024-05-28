/*
ID: zFa3
TASK: Rudolf and the ticket
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b, c, x, y, z=0;
    vector<int> left;
    cin >> a >> b >> c;
    for (int i=0;i<a;i++){
        cin >> x;
        left.push_back(x);
    }
    for (int i=0;i<b;i++){
        cin >> y;
        for (int& num:left){
            if ((y + num) <= c){
                z++;
            }
        }
    }
    cout << z << "\n";
}

int main(){

    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}