a = int(input())
b = [1 if i =="Y" else 0 for i in input()]

if b.count(1)>0:
    c=b[::-1]
    d=b[abs(c.index(1)-len(c)):]
    if abs(c.index(1)-len(c))-1>=d.count(0):
        print("YES")
    else:
        print("NO")
else:
    print("NO")
"""
def x(b1, sum_b):
    b1[0:sum_b] = [1 for _ in range(sum_b)]
    if b1 != b:
        return b1
    else:
        return False

while True:
    v = x(b[:], sum(b))
    p = len(b)//2
    if sum(b)>p or not v: break
    else: b=v
if sum(b)>p:
    print("YES")
else: 
    print("NO")


TASK: The Contest Contest 1 P1 - A Typical Codeforces Problem

#include<bits/stdc++.h>
#define ll long long
using namespace std;

auto x(vector<ll> b1, ll b_sum){
    vector<ll> b2=b1;
    for (size_t i = 0; i < b_sum; i++)
    {
        b1[i]=1;
    }
    if (b1 != b2){
        return b1;
    } else {
        return b2;
    }
    
}

ll sum(vector<ll> b){
    ll t=0;
    for (size_t i = 0; i < b.size(); i++)
    {
        if (b[i]){
            t++;
        }
    }
    return t;
}

void solution(){
    ll f; vector<ll> arr, arr2;
    char ax;
    cin>>f;
    for (size_t i = 0; i < f; i++)
    {
        cin>>ax;
        if (ax == 'Y'){
            arr.push_back(1);
        } else {
            arr.push_back(0);
        }
    }
    while (1){
        arr2=arr;
        if (sum(arr)>arr.size()/2 or x(arr, sum(arr)) == arr2){
            break;
        } else {
            arr = x(arr, sum(arr));
        }
    }
    if (sum(arr)>arr.size()/2){
        cout<<"YES"<<'\n';
    } else {
        cout<<"NO"<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solution();
}
"""