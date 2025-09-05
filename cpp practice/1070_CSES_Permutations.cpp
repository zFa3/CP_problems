/*
ID: zFa3
TASK: Permutations
LANG: C++                 
*/

#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;

int main(){
    ll count;
    cin>>count;
    if (count == 1){ cout << 1; }
    else if (count < 4){
        cout << "NO SOLUTION";
    } else {
        for (size_t i = 1; i < count + 1; i++)
        {
            if (i % 2 == 0){
                cout << i << " ";
            }
        }
        for (size_t i = 1; i < count + 1; i++)
        {
            if (i % 2){
                cout << i << " ";
            }
        }
        
    }
}