/*
ID: zFa3
TASK: Word Task
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    std::unordered_map<char, bool> vowels;
    vowels['A'] = true;
    vowels['I'] = true;
    vowels['U'] = true;
    vowels['E'] = true;
    vowels['Y'] = true;
    vowels['O'] = true;
    std::string input, output = "";
    cin >> input;
    for (char& character : input){
        if (!vowels[toupper(character)]){
            output.append(".");
            output += (char(tolower(character)));
        }
    }
    cout << output << endl;
    return 0;
}
