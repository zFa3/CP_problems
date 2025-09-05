/*
ID: zFa3
DATE: 2024-09-07 17:59:28
TASK: Voronoi Villages
LANG: C++
*/

#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll count;
    cin>>count;

    vector<int> arr(count);
    
    for (size_t i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    double min_village_size = 1e18;
    double current_village_size = 1e18;
    double previous_village_size = 1e18;
    
    for (size_t i = 0; i < count; i++)
    {
        if (i != 0 ){
            current_village_size = (arr[i] - arr[i - 1]) / (double)2;
            previous_village_size += (arr[i] - arr[i - 1]) / (double)2;
        }
        min_village_size = min(min_village_size, previous_village_size);
        previous_village_size = current_village_size;
    }
    cout << setprecision(10);
    if ((int)min_village_size == min_village_size){
        cout << (int)min_village_size << ".0\n";
    } else {
        cout << std::round(min_village_size * 10)/(double)10 << "\n";
    }
    return 0;
}