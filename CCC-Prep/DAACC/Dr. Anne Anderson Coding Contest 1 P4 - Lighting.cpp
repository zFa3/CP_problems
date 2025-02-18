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
    /*
     16
     2
     0001100000000001
     */
    int lights, radius;
    cin >> lights >> radius;
    string l; cin >> l;
    vector<bool> lightArr(lights);
    for (int i = 0; i < lights; i++){
        lightArr[i] = l[i] == '1';
    }
    int lightBleed = -1;
    for (int i = 0; i < lights; i++){
        if (lightArr[i]){
            lightBleed = radius;
        } else if (lightBleed >= 0){
            lightArr[i] = true;
        }
        lightBleed--;
    }
    lightBleed = -1;
    for (int i = lights - 1; i > -1; i--){
        if (lightArr[i]){
            lightBleed = radius;
        } else if (lightBleed >= 0){
            lightArr[i] = true;
        }
        lightBleed--;
    }
    int answer = 0;
    int counter = 0;
    vector<int> lgt;
    for (int i = 0; i < lights; i++){
        auto currlight = lightArr[i];
        if (!currlight){
            counter++;
        } else {
            lgt.push_back(counter);
            counter = 0;
        }
    }
    lgt.push_back(counter);
    for (int i = 0; i < lgt.size(); i++){
        answer += ceil(lgt[i] / (double)(radius * 2 + 1));
    }
    cout << answer;
}
