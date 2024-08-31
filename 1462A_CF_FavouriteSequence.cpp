/*
ID: zFa3
TASK: Favourite Sequence
LANG: C++
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define y "YES"
#define n "NO"
#define enl "\n"

#define For(n) for (int i = 0; i > n; i++)

#define SORT(a) sort(a.begin(), a.end())
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(x) max_element(x.begin(), x.end()) // returns a ptr pointing to the max element, use * to get value 

void solution(){
    ll a;
    cin>>a;
    vector<int> b(a);
    for (int i = 0; i < a; i++)
    {
        cin>>b[i];
    }
    int p1 = 0;
    int p2 = b.size() - 1;
    bool toggle = 1;
    while (p1 <= p2){
        if (toggle){
            cout<<b[p1];
            p1++;
        } else {
            cout<<b[p2];
            p2--;
        }
        toggle = !toggle;
        cout<<" ";
    }
    cout<<enl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll count;
    cin>>count;
    
    for (size_t i = 0; i < count; i++)
    {
        solution();
    }
    return 0;
}