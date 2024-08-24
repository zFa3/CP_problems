/*
ID: zFa3
TASK: Two Substrings
LANG: C++
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
#include <queue>
#include <set>

#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<int> ab, ba;
    string t;
    cin>>t;
    for (int i = 0; i < t.length(); i++){
        if (i != 0){
            if (t[i] == 'A' and t[i - 1] == 'B'){
                ab.push_back(i - 1);}
            if (t[i] == 'B' and t[i - 1] == 'A'){
                ba.push_back(i - 1);}
        }
    }
    for (int m: ab){
        for (int n: ba){
            if (abs(m - n) != 1){cout<<"YES"<<endl; return 0;}
        }
    }
    cout<<"NO"<<endl;
}