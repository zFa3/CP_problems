/*
ID: zFa3
TASK:
LANG: C++
*/

#include <iostream>
#include <set>
#include <vector>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n; cin>>n;
        string sequence; 
        cin>>sequence;
        multiset<char> ms;
        for(int r = 0; r < sequence.length(); r++){
            ms.insert(sequence[r]);
        }
        cout<<min(n, (ll)ms.count('A')) + min(n, (ll)ms.count('B')) + min(n, (ll)ms.count('C')) + min(n, (ll)ms.count('D'))<<"\n";
    }
}