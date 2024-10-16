/*
 User: zFa3
 Date: 10/15/24
 Task: New Game
 */

#include <bits/stdc++.h>
// #define int long long
#pragma GCC optimize("O3")

#define weight first
#define value second

// debug
#define debug(x) cout << "DEBUG\t" << x << "\n";
#define cout_vec(x) for (auto &i : x) cout << i << "\n";
#define cout_vpair(x) for (auto &i : x) cout << i.first << ' ' << i.second << "\n";
#define For(x) for (int i = 0; i < x; i++)
using namespace std;

int solution(){
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    vector<int> numbers;
    int temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (mp.count(temp) == 0){
            mp[temp] = 1;
            numbers.push_back(temp);
        } else {
            mp[temp]++;
        }
    }
    sort(numbers.begin(), numbers.end());
    
    int maximum = 0;
    int sum = 0;
    int start = 0;
    int prev = 0;
    
    for (int i = 0; i < numbers.size(); i++){
        if (numbers[i] >= k + start){
            sum -= mp[numbers[i]-k];
        }
        if (i != 0){
            if (abs(numbers[i] - prev) != 1){
                sum = 0;
                start = numbers[i];
            }
        }
        sum += mp[numbers[i]];
        prev = numbers[i];
        maximum = max(maximum, sum);
    }
    return maximum;
}
//     –––––––––
// 1 1 3 3 3 4 5 6 8 10

//1
//10 3
//8 10 4 3 1 1 3 5 3 6

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a;
    cin >> a;
    while(a--){
        cout << solution() << "\n";
    }
}
/*
 4
 10 2
 5 2 4 3 4 3 4 5 3 2
 5 1
 10 11 10 11 10
 9 3
 4 5 4 4 6 5 4 4 6
 3 2
 1 3 1

33 3
0 0 0 0 0 0 0
1 1 1 1 1 1 1 1
2 2 2
4 4 4 4 4 4 4 4 4
5 5 5 5 5 5
 
 */
