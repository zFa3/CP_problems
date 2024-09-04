/*
ID: zFa3
TASK: Weird algorithm
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
    
    while (1){
        if (count == 1){
            cout << 1 << "\n";
            break;
        }
        cout << count << ' ';
        if (count % 2){
            count *= 3;
            count++;
        } else {
            count /= 2;
        }
    }
}