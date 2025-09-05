/*
ID: zFa3
DATE: 2024-09-19 08:27:17
TASK: Battle for survive (2013B)
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) max_element(a.begin(), a.end())
#define pb push_back

#define all(x) x.begin(), x.end()
#define f firsrt
#define s second

#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);


signed main(){
    zFa3
    int a;
    cin >> a;
    while (a--){
        int numbers;
        cin >> numbers;
        vector<int> nums(numbers);
        for (int i = 0;i < numbers; i++){
            cin >> nums[i];
        }
        int accum = nums[numbers - 2];
        for (int i = numbers - 3; i > -1; i--){
            accum -= nums[i];
        }
        cout << nums[numbers - 1] - accum << "\n";
    }
}

/*
 
 5
 2
 2 1
 3
 2 2 8
 4
 1 2 4 3
 5
 1 2 3 4 5
 5
 3 2 4 5 4

 */
