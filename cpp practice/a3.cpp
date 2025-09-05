/*
ID: zFa3
TASK:
LANG: C++
*/

#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        vector<int> b = {0, 0};
        string bin;
        cin>>bin;
        for (int i = 0; i < bin.size(); i++){
            if (bin[i] == '0'){
                b[0]++;
            } else {
                b[1]++;
            }
        }
        int cost = 0, p1 = 0;
        // create new binary string
        for (int i = 0; i < bin.size(); i++){
            if (bin[p1] == '0'){
                if (b[1] > 0){p1++; b[1]--;} else {cost++;}
            } else {
                if (b[0] > 0){p1++; b[0]--;} else {cost++;}
            }
        }
        cout<<cost<<'\n';
    }
}