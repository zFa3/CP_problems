#include <bits/stdc++.h>
#define ll long long
#define For(x) for (int _ = 0; _ < x; _++)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int minutes, taskCnt;
    cin >> minutes >> taskCnt;
    vector<int> tasks(taskCnt);
    For (taskCnt){
        cin >> tasks[_];
    }
    sort(tasks.begin(), tasks.end());
    int total = 0;
    int counter = 0;
    while (total <= minutes){
        if (counter == taskCnt){
            counter++; break;
        }
        total += tasks[counter];
        counter++;
    }
    cout << counter - 1 << "\n";
}