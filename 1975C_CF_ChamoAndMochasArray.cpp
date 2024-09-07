/*
ID: zFa3 + ZZ-
TASK: Chamo and Mocha's Array
LANG: C++
*/

#include <bits/stdc++.h>

#define ll long long
using namespace std;

#define FOR(a) for(int i = 0; i < a; i++)

void solution(){
    ll d, maximum = 0;
    cin >> d;
    vector<int> p(3), q(3);
    if (d == 2){
        cin >> p[1] >> p[2];
        cout << min(p[1], p[2]) << "\n";
    } else {
        cin >> p[0] >> p[1] >> p[2];

        // 1 2 3 4 5
        // a b c d e
        // 0 1 2
        // b c 
        FOR(d - 3){

            q = p;
            sort(q.begin(), q.end());

            // maximum = max({1, 2, 3, 4, 5})
            maximum = max(maximum, (ll)q[1]);
            p[0] = p[1];
            p[1] = p[2];
            cin >> p[2];
        }
        
         
        sort(p.begin(), p.end());
        cout << max(maximum, (ll)p[1]) << "\n";
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t = 1;
    cin>>t;

    while(t--){
        solution();
    }
}