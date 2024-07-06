/*
ID: zFa3
TASK: Two Sum
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define SORT(a) sort(a.begin(), a.end())
using namespace std;

bool solution(){
    ll a, b;
    cin>>a;
    vi nums;
    for (size_t i = 0; i < a; i++)
    {
        cin>>b;
        nums.push_back(b);
    }
    SORT(nums);
    cin>>a;
    ll p1 = 0, p2 = nums.size()-1;
    while (1){
        if (p1 == p2){
            return false;
        }
        if (nums[p1] + nums[p2] == a){
            break;
        } else if (nums[p1] + nums[p2] > a) {
            p2--;
        } else if (nums[p1] + nums[p2] < a) {
            p1++;
        }
    }
    cout<<p1<<' '<<p2<<' '<<nums[p1]<<' '<<nums[p2]<<'\n';
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        cout<<solution()<<endl;
    }
}