#include <iostream>

using namespace std;

int main() {
    int counter = 0, times;
    cin >> times;
    while (times--){
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c > 1){
            counter += 1;
        }
    }
    cout << counter << endl;
    return 0;
}