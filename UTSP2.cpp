#include <bits/stdc++.h>
#define int long long

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())

// syntax
#define mp make_pair

// other macros
#define MOD (int)1e8

// speed
#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);
#pragma GCC optimize("O3")

using namespace std;

signed main(){
    int number, moves;
    cin >> number >> moves;
    vector<int> presents(number);
    For (number) { cin >> presents[i]; }
    
    int p1 = 0;
    int p2 = number-1;
    int total = 0;
    
    SORT(presents);
    moves++;
    while (moves-- > 1){
        if (p1 == p2){
            total += abs(moves > 2 ? presents[p1] : 0);
            break;
        }
        if (presents[p2] < 0){
            // if we only have negatives
            if (moves < 2){
                // and there are no more moves left
                break;
            }
            // otherwise we take the smallest negative
            total -= presents[p1];
            moves--;
            p1++;
        } else {
            // we can choose between pos and neg
            if (moves > 1){
                // we can choose to take the negative side
                if (-presents[p1] > presents[p2] + presents[p2-1]){
                    // if the negative is larger than the two positives
                    total -= presents[p1];
                    moves--;
                    p1++;
                } else {
                    // else the two pos are larger than -neg
                    total += presents[p2];
                    p2--;
                }
            } else {
                // we can only take positives
                total += presents[p2] > 0? presents[p2] : 0;
                p2--;
            }
        }
    }
    cout << total << endl;
    return 0;
}
