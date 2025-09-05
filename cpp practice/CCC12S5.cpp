#include <bits/stdc++.h>
using namespace std;

signed main(){
    int N, M, C;
    int s, t;
    cin >> N >> M;
    cin >> C;
    unordered_map<int, int> Cat;
    for (int i = 0; i < C; i++){
        cin >> s >> t;
        Cat[s*M+t] = 1;
    }
    int arr[N+1][M+1];
    memset(&arr[0][0], 0, sizeof(arr));
    arr[1][1] = 1;
    for (int i = 1; i < N+1; i++) {
        for (int j = 1; j < M+1; j++) {
            arr[i][j] += (arr[i-1][j]+arr[i][j-1])*(Cat[i*M+j]==0);
        }
    }
    cout << arr[N][M];
}
