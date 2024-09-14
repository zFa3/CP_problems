/*
ID: zFa3
TASK: Monkey Potato
LANG: C++
*/

#include <iostream>
#include <algorithm>
#include <vector>

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
    ll k, d;
    cin>>k>>d;
    int input = 0;
    int minimum;
    bool check = false;
    bool zero = false;
    for (size_t i = 0; i < d; i++)
    {
        cin>>input;
        if (input > 0){
            minimum = min(minimum, input);
            check = true;
        } else {
            zero = true;
        }
            
    }
    if (!check){
        cout<<-1;
    }
    else{
        for (size_t i = 0; i < k; i++)
        {
            if (zero and (i != 0 and i != k - 1)){
                cout << 0;
            } else {
                cout << minimum;
            }
        }
    }
    cout<<"\n";
}