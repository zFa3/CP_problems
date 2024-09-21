/*
ID: zFa3
DATE: 2024-09-19 08:27:17
TASK: Save More Mice
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) max_element(a.begin(), a.end())
#define pb push_back

#define all(x) x.begin(), x.end()
#define f firsrt
#define s second

#define zFa3 ios_base::sync_with_stdio(false); cin.tie(NULL);

bool check(string inp, int length){
    if (inp == "1" or inp == "1111") return true;
    int index = 0;
    while (index < length){
        if (inp[index] == '0'){
            return (index - 1) == (int)pow(inp.length(), 0.5) and (int)pow(inp.length(), 0.5) == pow(inp.length(), 0.5);
        }
        index++;
    }
    return false;
}

int main(){
    zFa3
    int a;
    cin >> a;
    while (a--){
        int length;
        cin >> length;
        string input;
        cin >> input;
        cout << (check(input, length) ? "YES\n" : "NO\n");
    }
}
