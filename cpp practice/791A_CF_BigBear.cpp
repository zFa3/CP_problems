#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 0, b = 0, x = 1;
    cin >> a >> b;
    while (true) {
        if ((pow(3, x) * a) > (pow(2, x) * b)){
            break;
        } else {
        x++;
        }
    }
    cout << x << endl;
}