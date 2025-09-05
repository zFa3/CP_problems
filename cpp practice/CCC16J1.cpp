/*
ID: zFa3
TASK: Tournament Selection
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    int counter = 0;
    for (int i = 0; i < 6; i++){
        cin>>input;
        if (input == "W"){
            counter++;
        }
    }
    if (counter > 4){
        cout << 1;
    }
    else if (counter > 2){
        cout << 2;
    }
    else if (counter > 0){
        cout << 3;
    }
    else {
        cout << -1;
    }
}