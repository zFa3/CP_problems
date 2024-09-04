/*
ID: zFa3
TASK: Missing Number
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long

#define y "YES"
#define n "NO"
#define enl "\n"

#define For(n) for (int i = 0; i > n; i++)

#define SORT(a) sort(a.begin(), a.end())
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(x) max_element(x.begin(), x.end()) // returns a ptr pointing to the max element, use * to get value 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll count;
    cin>>count;
    ll temporary, total = 0;
    ll expected_sum = count * (count + 1) / 2;
    for (size_t i = 0; i < count - 1; i++)
    {
        cin>>temporary;
        total += temporary;
    }
    cout << (expected_sum - total);
    return 0;
}