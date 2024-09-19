/*
ID: zFa3
DATE: 2024-09-19 08:27:17
TASK: Save More Mice
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) max_element(a.begin(), a.end())
#define pb push_back

#define all(x) x.begin(), x.end()
#define f firsrt
#define s second

#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);

void solution(){
    int a, b;
    cin >> a >> b;
    vector<int> mice_loc(b);
    for (int i = 0; i < b; i++){
        int temp;
        cin >> temp;
        mice_loc[i] = a - temp;
    }
    SORT(mice_loc);
    // reverse(mice_loc.begin(), mice_loc.end());
    int counter = 0;
    for (int i = 0; i < b; i++){
        a -= mice_loc[i];
        if (a <= 0){
            break;
        }
        counter++;
    }
    cout << counter << endl;
}

int main(){
    zFa3
    int a;
    cin >> a;
    while (a--){
        solution();
    }
}

/*
 3
 10 6
 8 7 5 4 9 4
 2 8
 1 1 1 1 1 1 1 1
 12 11
 1 2 3 4 5 6 7 8 9 10 11

 */
