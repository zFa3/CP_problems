/*
ID: zFa3
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

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
#define int long long

bool check(int middle, int total, int people, int pot_amount){
    return ((long double)pot_amount + total) / (people * 2) > middle;
}

int solution(){
    int length;
    cin >> length;
    vector<int> gold(length);
    for (int i = 0; i < length; i++){
        cin >> gold[i];
    }
    if (length < 3){
        return -1;
    }
    SORT(gold);
    int total = SUM(gold);
    int people = gold.size();
    int middle = gold[people/2];
    
    int p1 = 0;
    int p2 = LONG_LONG_MAX - 1;
    int center = -12;
    
    while (p1 <= p2){
        center = (p1 + p2) / 2;
        // center + total / people * 2 > middle
        if (check(middle, total, people, center) and not check(middle, total, people, center - 1)){
            return center;
        }
        if (check(middle, total, people, center)){
            p2 = center - 1;
        } else {
            p1 = center + 1;
        }
    }
    return 0;
}

signed main(){
    zFa3
    int a;
    cin >> a;
    while (a--){
        cout << solution() << "\n";
    }
}

/*
 6
 1
 2
 2
 2 19
 3
 1 3 20
 4
 1 2 3 4
 5
 1 2 3 4 5
 6
 1 2 1 1 1 25

 */
