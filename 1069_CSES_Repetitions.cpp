/*
ID: zFa3
TASK: Repetitions
LANG: C++
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string input;
    cin>>input;
    ll p1 = 0;
    ll p2 = 0;
    ll maximum_length = 1;
    while (p2 < input.size())
    {
        if (input[p2] == input[p1]){
            maximum_length = max(maximum_length, (p2 - p1 + 1));
            p2++;
        } else {
            p1 = p2;
        }
    }
    cout << maximum_length;
}