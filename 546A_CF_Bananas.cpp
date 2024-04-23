#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ithTerm(ll w){
    static ll max = 0;
    static std::unordered_map<ll, ll> memo;
    if (memo.count(w)){
        return memo[w];
    }
    if (w < max){
        ll total = memo[max];
        for (ll i = max; i <= w; i++){
            total += i;
        }
        memo[w] = total;
        max = w;
        return total;
    } else {
        ll total = 0;
        for (ll i = 1; i <= w; i++){
            total += i;
        }
        memo[w] = total;
        max = w;
        return total;
    }
}

int main(){
    ll a, b, c, borrow;
    cin >> a >> b >> c;
    borrow = (ithTerm(c) * a) - b;
    if (borrow < 0){
        cout << 0;
    } else {
        cout << borrow;
    }
    return 0;
}