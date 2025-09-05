/*
ID: zFa3
TASK: Chat Room
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

string solution(){
    std::string hello;
    std::string a = "hello";
    int tab = 0;
    cin >> hello;
    for (char& h : hello){
        if (h == a[tab]){
            tab++;
            if (tab == 5){
                return "YES";
            }
        }
    }
    return "NO";
}

int main(){
    cout << solution() << endl;
}