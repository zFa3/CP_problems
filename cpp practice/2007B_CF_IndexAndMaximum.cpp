/*
ID: zFa3
DATE: 2024-09-10 18:11:38
TASK: Index and Maximum
LANG: C++
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define pb push_back

void solution(){
  ll a, b;
  cin >> a >> b;
  vector<int> arr(a);
  for (size_t i = 0; i < a; i++)
  {
    cin >> arr[i];
  }
  SORT(arr);
  ll maximum = arr[arr.size() - 1];
  for (size_t i = 0; i < b; i++)
  {
    char u;
    ll f, g;
    cin >> u;
    cin >> f >> g;
    if (f <= maximum and maximum <= g){
      if (u == '-'){
        maximum--;
      } else {
        maximum++;
      }
    }
    cout << maximum << ' ';
  }
  cout << "\n";
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll t = 1;
  cin>>t;

  for(int i = 0; i < t; i++){
      solution();
    }
}
