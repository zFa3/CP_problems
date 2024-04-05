#include <bits/stdc++.h>
using namespace std;

int lexicographically_larger(char a, char b){
    if ((int)toupper(a) > (int)toupper(b)){
        return 1;
    } else if ((int)toupper(a) < (int)toupper(b)){
        return -1;
    } else {
        return 0;
    }
}

int check(string a, string b){
    int x;
    while (true){
        for (int i = 0; i < a.length(); i++){
            x = lexicographically_larger(a[i], b[i]);
            if (x){return x;}
        }
        return 0;
    }
}

int main(){
    string a, b;
    cin >> a >> b;
    cout << check(a, b) << endl;
}