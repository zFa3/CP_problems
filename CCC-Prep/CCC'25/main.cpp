#include <bits/stdc++.h>
#define int long long
#define For(x) for (int _ = 0; _ < x; _++)
using namespace std;

signed main(){
    int a; string b;
    cin >> b >> a;
    int total = 0;
    bool tracking = false;
    int num = 0;
    int counter = 0;
    char chr;
    deque<pair<int, char>> rle;
    for (int i = b.size() - 1; i >= 0; i--){
        chr = b[i];
        if (!isalpha(chr)){
            num += (chr - '0') * powl(10, counter);
            counter++;
            tracking = true;
        } else if (tracking) {
            tracking = false;
            total += num;
            rle.push_front({num, chr});
            counter = 0;
            num = 0;
        }
    }
    total += num * tracking;
    int cumulativeSum = 0;
    for (int i = 0; i < (int)(rle.size()); i++){
        cumulativeSum += rle[i].first;
        if (cumulativeSum > a % total){
            cout << rle[i].second << "\n"; break;
        }
    }
}
// rrmmmmmr
