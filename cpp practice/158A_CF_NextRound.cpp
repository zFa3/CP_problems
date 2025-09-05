#include <iostream>
#include <string>

using namespace std;

int main(){
    int n = 0, k = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cutoff = a[k - 1];
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= max(cutoff, 1)) {
            total++;
        } 
    }
    cout << total << endl;
    return 0;
}