#include <bits/stdc++.h>
using namespace std;

#define For(x) for (int i = 0; i < x; i++)
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define mp make_pair
#define vc vector
#define pb push_back
#define debug(x) cout << x << endl;

vector<pair<string, int>> names;
int groupMax;

// current index, groupCount
map<vector<int>, pair<int, vc<vc<string>>>> memo;
pair<int, vc<vc<string>>> dp(int groupCount, int currentIndex, int currentTime, int currentGroupTime, vc<vc<string>> groups){
    vector<int> key = {groupCount, currentIndex, currentTime, currentGroupTime};
    if (memo.find(key) != memo.end())
        return memo[key];
    if (currentIndex == names.size() - 1){
        if (groupCount == groupMax){
            // make a new group
            vector<string> newGroup;
            newGroup.push_back(names[currentIndex].f);
            groups.push_back(newGroup);
            memo[key] = mp(currentTime + names[currentIndex].s + currentGroupTime, groups);
            return mp(currentTime + names[currentIndex].s + currentGroupTime, groups);
        }
        // otherwise we can stuff this person is the last group
        groups[groups.size() - 1].push_back(names[currentIndex].f);
        memo[key] = mp(currentTime + max(currentGroupTime, names[currentIndex].s), groups);
        return mp(currentTime + max(currentGroupTime, names[currentIndex].s), groups);
    }
    vector<string> newGroup;
    auto groups2 = groups;
    pair<int, vc<vc<string>>> answer2;
    answer2.f = 1e9;
    bool help = false;
    if (groupCount != groupMax and groups.size() != 0){
        help = true;
        // we can stuff this person is the last group
        groups[groups.size() - 1].push_back(names[currentIndex].f);
        answer2 = dp(groupCount + 1, currentIndex + 1, currentTime, max(currentGroupTime, names[currentIndex].s), groups);
    }
    // we have to make a new group
    newGroup.push_back(names[currentIndex].f);
    groups2.push_back(newGroup);
    pair<int, vc<vc<string>>> answer = dp(1, currentIndex + 1, currentTime + max(currentGroupTime, currentIndex == 0 ? 0 : names[currentIndex - 1].s), names[currentIndex].s, groups2);
    if (help and answer.f > answer2.f){
        memo[key] = answer2;
        return answer2;
    }
    memo[key] = answer;
    return answer;
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int r, t;
    cin >> r >> t;
    groupMax = r;
    For (t){
        string name;
        int time;
        cin >> name >> time;
        names.pb(mp(name, time));
    }
    vc<vc<string>> groups;
    auto answer = dp(0, 0, 0, 0, groups);
    cout << "Total Time: " << answer.f << '\n';
    for (auto item : answer.s){
        for (auto person: item){
            cout << person << " ";
        }
        cout << "\n";
    }
}
