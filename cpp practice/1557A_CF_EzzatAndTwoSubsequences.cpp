/*
ID: zFa3
TASK: Ezzat and Two Subsequences
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;

#define y "YES"
#define n "NO"
#define enl "\n"

#define For(n) for (int i = 0; i > n; i++)

#define SORT(a) sort(a.begin(), a.end())
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(x) max_element(x.begin(), x.end())

double solution(){
    int countr;
    cin>>countr;
    vector<int> arr(countr);
    for (size_t i = 0; i < countr; i++)
    {
        cin>>arr[i];
    }
    return (SUM(arr) - *MAX(arr))/(double)(arr.size() - 1) + (double)*MAX(arr);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int count;
    cin>>count;
    cout << setprecision(10);

    for (size_t i = 0; i < count; i++)
    {
        cout<<solution()<<enl;
    }

    return 0;
}