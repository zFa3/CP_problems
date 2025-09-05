/*
ID: zFa3
TASK: Basils Garden
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a, b;
    cin>>a;
    vector<vector<int>> c;
    vector<int> times;
    for (size_t i = 0; i < a; i++)
    {
        cin>>b;
        vector<int> temp;
        temp.push_back(b);
        temp.push_back(0);
        c.push_back(temp);
    }
    if (a > 1){
    for (size_t i = a-1; i < -1; i--)
    {
        if (i == a-1){
            times.push_back(c[i][0]);
            c[i][1] = c[i][0];
        } else if (c[i][0]>c[i+1][1]){
            times.push_back(c[i][0]);
            c[i][1] = (c[i][0]);
        } else if (c[i][0]<c[i+1][1]){
            times.push_back(c[i+1][1] + 1);// (c[i+1][1] - c[i][0]));
            c[i][1] = (c[i+1][1] + 1);// (c[i+1][1] - c[i][0]));
        } else {
            times.push_back(c[i+1][1]+1);
            c[i][1] = (c[i+1][1]+1);
        }
    }
    /*
    for (int i = times.size()-1; i > 0; i--){
        cout<<times[i]<<'_';
    }
    */
    cout<<*max_element(times.begin(), times.end())<<'\n';
    } else {
        cout<<b<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(true); cin.tie(NULL);
    ll t;
    cin>>t;

    while(t--){
        solution();
    }
}