/*
ID: zFa3
TASK: Taxi
LANG: C++
*/
 
#include <bits/stdc++.h>

using namespace std;
 
int main(){
    int a, b, total = 0;
    cin >> a;
    std::unordered_map<int, int> nums;
    for (int i = 0; i < a; i++){
        cin>>b;
        nums[b]++;
    }
    b=min(nums[3], nums[1]);
    total += b;
    nums[3] -= b;
    nums[1] -= b;
    total += (floor((float)nums[2]/2));
    nums[2] -= (floor((float)nums[2]/2)*2);
    if (nums[1] && nums[2]){
        while (nums[1]>0 && nums[2]>0){
            nums[2]--;
            nums[1]-=2;
            total++;
        }
    }
    for(int i=1;i<5;i++){
        if (nums[i] < 0){
            nums[i] = 0;
        }
    }
    total += nums[2] + nums[3] + nums[4];
    total += nums[1]/4;
    if (nums[1]%4>0){
        total++;
    }
    cout << total <<"\n";
    return 0;
}