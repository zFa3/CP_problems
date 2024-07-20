/*
NOTE: THIS IS NOT MY CODE
JUST A HELPFUL REFERECE FOUND AT
https://cp-algorithms.com/algebra/divisors.html
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long numberOfDivisors(long long num) {
    long long total = 1;
    for (int i = 2; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            int e = 0;
            do {
                e++;
                num /= i;
            } while (num % i == 0);
            total *= e + 1;
        }
    }
    if (num > 1) {
        total *= 2;
    }
    return total;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
    cin>>t;
    cout<<numberOfDivisors(t);
}