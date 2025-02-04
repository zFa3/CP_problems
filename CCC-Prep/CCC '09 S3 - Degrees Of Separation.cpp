#include <bits/stdc++.h>

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())
#define mp make_pair

// speed
#pragma GCC optimize("O3")

#define roadCost second
#define cityNum first

using namespace std;

vector<set<int>> adjList = {
    {}, {6}, {6}, {4,5,6,15}, {3,5,6}, {3,4,6}, {1,2,3,4,5,7}, {6,8}, {7,9}, {8,10,12}, {9,11}, {10,12}, {9,11,13}, {12,14,15}, {13}, {3,13}, {17,18}, {16,18}, {16,17}
};

void addFriend(){
    int f1, f2;
    cin >> f1 >> f2;
    for (int i = 18; i <= f1; i++){
        adjList.push_back(set<int>());
    }
    adjList[f1].insert(f2);
    adjList[f2].insert(f1);
}

void removeFriend(){
    int f1, f2;
    cin >> f1 >> f2;
    adjList[f1].erase(adjList[f1].find(f2));
    adjList[f2].erase(adjList[f2].find(f1));
}

void countFriends(){
    int f1;
    cin >> f1;
    cout << adjList[f1].size() << "\n";
}

void countDoubleFriends(){
    int f1, sum = 0;
    cin >> f1;
    queue<pair<int, int>> qu;
    set<int> visited;
    qu.push(mp(f1, 0));
    visited.insert(f1);
    while (qu.size()){
        auto curr = qu.front();
        qu.pop();
        if (curr.second == 2){
            sum++;
        } else {
            for (int n : adjList[curr.first]){
                if (visited.find(n) == visited.end()){
                    visited.insert(n);
                    qu.push(mp(n, curr.second + 1));
                }
            }
        }
    }
    cout << sum << "\n";
}

void countSeperation(){
    int f1, f2;
    cin >> f1 >> f2;
    queue<pair<int, int>> qu;
    set<int> visited;
    qu.push(mp(f1, 0));
    visited.insert(f1);
    while (qu.size()){
        auto curr = qu.front();
        qu.pop();
        if (curr.first == f2){
            cout << curr.second << "\n";
            return;
        } else {
            for (int n : adjList[curr.first]){
                if (visited.find(n) == visited.end()){
                    visited.insert(n);
                    qu.push(mp(n, curr.second + 1));
                }
            }
        }
    }
    cout << "Not connected\n";
    return;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    char input;
    while (true){
        cin >> input;
        if (input == 'q') return 0;
        else if (input == 'i') addFriend();
        else if (input == 'd') removeFriend();
        else if (input == 'n') countFriends();
        else if (input == 'f') countDoubleFriends();
        else if (input == 's')
            countSeperation();
    }
}
