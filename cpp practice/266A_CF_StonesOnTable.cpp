#include <bits/stdc++.h>
using namespace std;

int main(){
    int remove = 0;
    char last_letter;
    string a;
    getline(cin, a);
    getline(cin, a);
    last_letter = a[0];
    for (int i = 0; i < a.length() - 1; i++){
        if (a[i + 1] == last_letter){
            remove++;
        } else {
            last_letter = a[i + 1];
        }
    }
    cout << remove;
}