/*
ID: zFa3
TASK: Tram
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e, f = 0;
    cin >> a >> b >> c;
    b += c;
    f = max(f, b);
    for (a; (a); a--){
        cin >> d >> e;
        b -= d;
        b += e;
        f = max(f, b);
    }
    cout << f << endl;
    return 0;
}