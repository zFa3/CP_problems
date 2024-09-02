/*
ID: zFa3
TASK: Kicking
LANG: C++
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;
#define ll long long

#define For(n) for (int i = 0; i > n; i++)

#define SORT(a) sort(a.begin(), a.end())
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(x) max_element(x.begin(), x.end()) // returns a ptr pointing to the max element, use * to get value 

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cin.ignore();
    // removes the newline after a, b, c

    for (int j = 0; j < a; j++){
        string row;
        getline(cin, row);
        // getline faster than induvidual cins?
        for (int i = 0; i < b; i++){
            if (row[i] == 'A'){
                if (find(row.begin() + i + 1, row.begin() + min(i + c + 1, b), 'B') != row.begin() + min(i + c + 1, b)){
                    cout << "N";
                } 
                else{cout << "Y";}
            } 
            else if (row[i] == 'B'){
                if (find(row.begin() + max(i - c, 0), row.begin() + i, 'A') != row.begin() + i){
                    cout << "N";
                } 
                else{cout << "Y";}
            } 
            else{cout << ".";}
        }
        cout << "\n";
    }
}

