#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cin >> i;
    cout << floor(i / 5) + ceil((i % 5) * 0.2);
    return 0;
}