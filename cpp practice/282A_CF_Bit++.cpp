#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, counter = 0;
    cin >> n;
    while (n--) {
        string input;
        cin >> input;
        if (input[1] == '+'){
            counter += 1;
        } else {
            counter -= 1;
        }
    }
    cout << counter << endl;
    return 0;
}
