/*
ID: zFa3
TASK: 59A_Word
LANG: C++                 
*/

#include <bits/stdc++.h>

using namespace std;

void printUpper(std::string str){
    for (char& c : str){
        cout << (char)toupper(c);
    }
    cout << endl;
}
void printLower(std::string str){
    for (char& c : str){
        cout << (char)tolower(c);
    }
    cout << endl;
}

int main() {
    int upper_count = 0, lower_count = 0;
    std::string input;
    cin >> input;
    for (char& x : input){
        if (isupper(x)){
            upper_count += 1;
        } else {
            lower_count += 1;
        }
    }
    if (upper_count > lower_count){
        printUpper(input);
    } else {
        printLower(input);
    }
}
