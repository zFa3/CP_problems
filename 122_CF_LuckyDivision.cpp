/*
ID: zFa3
TASK: Lucky Divsion
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

bool isLucky(int number){
    for (auto& chr : to_string(number)){
        if (chr != '7' && chr != '4'){
            return false;
        }
    }
    return true;
}

string solution(){
    int num;
    cin >> num;
    vector<int> luckys;
    for (int i = 0; i < 1000; i++){
        if (isLucky(i)){
            luckys.push_back(i);
        }
    }
    for (int& a : luckys){
        if (num % a == 0){
            return "YES";
        }
    }
    if (isLucky(num)){
        return "YES";
    }
    return "NO";
}

int main(){
    cout << solution();
}