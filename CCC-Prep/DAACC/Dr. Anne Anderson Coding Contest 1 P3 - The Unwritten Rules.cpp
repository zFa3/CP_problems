#include <bits/stdc++.h>
#define int long long

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define REV(a) reverse(a.begin(), a.end())
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair

// speed
#pragma GCC optimize("O3")

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int rows, seatsPerRow;
    cin >> rows >> seatsPerRow;
    int leftSide = seatsPerRow;
    int rightSide = seatsPerRow + 1;
    int student;
    pair<int, int> rowNum = {0, 0};
    for (int i = 0; i < 2 * rows * seatsPerRow; i++){
        cin >> student;
        if (student == leftSide and rowNum.first <= rowNum.second){
            if (leftSide == rowNum.first * seatsPerRow * 2 + 1){
                rowNum.first++;
                leftSide = rowNum.first * seatsPerRow * 2 + seatsPerRow;
            } else {
                leftSide--;
            }
        } else if (student == rightSide and rowNum.second <= rowNum.first){
            if (rightSide == (rowNum.second + 1) * seatsPerRow * 2){
                rowNum.second++;
                rightSide = rowNum.second * seatsPerRow * 2 + seatsPerRow + 1;
            } else {
                rightSide++;
            }
        } else {
            cout << "no\n"; return 0;
        }
    }
    cout << "yes\n";
}
