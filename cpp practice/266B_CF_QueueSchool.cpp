/*
ID: zFa3
TASK: Queue At School
LANG: C++
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    std::string queue;
    int steps, b;
    cin >> b >> steps;
    cin >> queue;
    std::string n_queue = queue;
    for (int j = 0; j < (steps); j++){
        for (int i = 0; i < queue.length(); i++){
            if (queue[i] == 'B' && queue[i + 1] == 'G'){
                n_queue[i] = 'G'; n_queue[i + 1] = 'B';
            }
        }
        queue = n_queue;
    }
    cout << n_queue << endl;
    return 0;
}