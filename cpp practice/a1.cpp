/*
ID: zFa3
TASK: Sum in binary tree
LANG: C++
*/

#include <iostream>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, r, sum;
    cin>>t;

    while(t--){
        cin>>r;
        sum = 1;
        while (r != 1){
            sum += r;
            r /= 2;
        }
        cout<<sum<<"\n";
    }
}