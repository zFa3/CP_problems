#include <bits/stdc++.h>
#define int long long

// macros
#define For(x) for (int i = 0; i < x; i++)
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) *max_element(a.begin(), a.end())
#define all(x) (x.begin(), x.end())

// syntax
#define mp make_pair

// other macros
#define MOD (int)1e8

// speed
#pragma GCC optimize("O3")

using namespace std;

string performAction(string str){
    string newString = "";
    vector<pair<char, int>> store;
    for (char character : str){
        if (store.size()){
            if (store[store.size() - 1].first == character){
                store[store.size() - 1].second++;
            } else {
                store.push_back(mp(character, 1));
            }
        } else {
            store.push_back(mp(character, 1));
        }
    }
    for (auto pair : store){
        newString += to_string(pair.second);
        newString += pair.first;
    }
    return newString;
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    string str;
    cin >> n >> str;
    For (n){
        str = performAction(str);
    }
    cout << str << endl;
}
