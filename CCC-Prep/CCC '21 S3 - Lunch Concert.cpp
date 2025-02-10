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

int people; int maximum = -1;
vector<vector<int>> students;
int calculateTotalTime(int pos){
    int total = 0;
    for (int i = 0; i < people; i++){
        // dist is defined by abs(abs(currpos - pos) - hearingDist) * sec/m
        total += max(abs(students[i][0] - pos) - students[i][2], 0LL) * students[i][1];
    }
    return total;
}

int bestPossiblePosition(){
    int p1 = 0; int p2 = maximum;
    int minimum = 1e18;
    int center = 1;
    while (p1 <= p2){
        center = (p1 + p2) / 2;
        auto t1 = calculateTotalTime(center - 1);
        auto t2 = calculateTotalTime(center);
        if (t1 > t2){
            p1 = center + 1;
            minimum = min(minimum, t2);
        } else {
            p2 = center - 1;
            minimum = min(minimum, t1);
        }
    }
    return min(minimum, calculateTotalTime(center));
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> people;
    int x, y, z;
    // position, secondsPerMeter, hearingDistance
    students = vector<vector<int>>(people);
    For (people){
        cin >> x >> y >> z;
        maximum = max(maximum, x + 1);
        students[i].push_back(x);
        students[i].push_back(y);
        students[i].push_back(z);
    }
    
    // For (50){ cout << calculateTotalTime(i) << endl; }
    if (people == 1){
        cout << 0;
    } else {
        cout << bestPossiblePosition() << "\n";
    }
}
