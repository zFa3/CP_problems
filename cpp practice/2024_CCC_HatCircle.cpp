/*
ID: zFa3
TASK: Hat Circle
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    vector<int> nums;
    ll a=0, b, c;
    cin>>c;
    for (int i=0;i<c/2;i++){
        cin>>b;
        nums.push_back(b);
    }
    for (int i=c/2;i<c;i++){
        cin>>b;
        if (b == nums[i-(c/2)]){
            a++;
        }
    }
    cout<<a*2;
}

int main(){
    solution();
}