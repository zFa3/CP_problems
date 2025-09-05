/*
ID: zFa3
TASK: cAPS lOCK
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int counter = 0;
    std::vector<char> list;
    std::string input;
    cin >> input;
    for (char& c : input){\
        if (islower(c)){
            counter++;
        }
        if (islower(c) && !(input[0] == c)){
            cout << input; return 0;
        }
        list.push_back(c);
    }
    if (counter > 1){
        cout << input;
    } else {
        for (int i = 0; i < list.size(); i++){
            if (isupper(list[i])){
                cout << (char)tolower(list[i]);
            } else {
                cout << (char)toupper(list[i]);
            }
        }
    }
    return 0;
}