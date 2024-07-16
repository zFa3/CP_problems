/*
ID: zFa3
TASK: Magnets
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t, counter = 1;
    cin>>t;
    string previous, current;
    cin>>previous;
    while(--t){
        cin>>current;
        if (current != previous){
            counter++;
        }
        previous = current;
    }
    cout<<counter<<endl;
}