/* bridge crossing */
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

vc<pair<string, int>> names;
int groupMax;

// current index, grpCnt
map<vc<int>, pair<int, vc<vc<string>>>> memo;
pair<int, vc<vc<string>>> dp(int grpCnt, int curr, int currTime, int currGrpTime, vc<vc<string>> groups){
    vc<int> key = {grpCnt, curr, currTime, currGrpTime};
    if (memo.find(key) != memo.end())
        return memo[key];
    if (curr == names.size() - 1){
        if (grpCnt == groupMax){
            // make a new group
            vc<string> newGroup;
            newGroup.push_back(names[curr].f);
            groups.push_back(newGroup);
            memo[key] = mp(currTime + names[curr].s + currGrpTime, groups);
            return mp(currTime + names[curr].s + currGrpTime, groups);
        }
        // otherwise we can stuff this person is the last group
        groups[groups.size() - 1].push_back(names[curr].f);
        memo[key] = mp(currTime + max(currGrpTime, names[curr].s), groups);
        return mp(currTime + max(currGrpTime, names[curr].s), groups);
    }
    vc<string> newGroup;
    auto groups2 = groups;
    pair<int, vc<vc<string>>> answer2;
    answer2.f = 1e9;
    bool help = false;
    if (grpCnt != groupMax and groups.size() != 0){
        help = true;
        // we can stuff this person is the last group
        groups[groups.size() - 1].push_back(names[curr].f);
        answer2 = dp(grpCnt + 1, curr + 1, currTime, max(currGrpTime, names[curr].s), groups);
    }
    // we have to make a new group
    newGroup.push_back(names[curr].f);
    groups2.push_back(newGroup);
    pair<int, vc<vc<string>>> answer = dp(1, curr + 1, currTime + max(currGrpTime, curr == 0 ? 0 : names[curr - 1].s), names[curr].s, groups2);
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
