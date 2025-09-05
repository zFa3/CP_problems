#include <iostream>

using namespace std;

int main(){
    string str;
    int a = 0, b = 0, c = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1'){
            a++;
        }
        if (str[i] == '2'){
            b++;
        }
        if (str[i] == '3'){
            c++;
        }
    }
    int counter = a + b + c;
    for (int i = 0; i < a; i++){
        if (counter > 1) {
            cout << "1+";
        } else {
            cout << "1";
        }
        counter--;
    }
    for (int i = 0; i < b; i++){
        if (counter > 1) {
            cout << "2+";
        } else {
            cout << "2";
        }
        counter--;
    }
    for (int i = 0; i < c; i++){
        if (counter > 1) {
            cout << "3+";
        } else {
            cout << "3";
        }
        counter--;
    }
    return 0;
}