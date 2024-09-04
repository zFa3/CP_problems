/*
ID: zFa3
TASK: Increasing Array
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll count;
    cin>>count;
    vector<ll> array(count);
    for (size_t i = 0; i < count; i++)
    {
        cin>>array[i];
    }
    ll total = 0;
    for (size_t i = 0; i < count; i++)
    {
        if (i){
            if (array[i] < array[i - 1]){
                total += array[i - 1] - array[i];
                array[i] = array[i - 1];
            }
        }
    }
    cout << "\n" << total;
    // 1000000000 1 1 1 1 1 1 1 1 1
    return 0;
}