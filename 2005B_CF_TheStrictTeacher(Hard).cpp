//  Created by zFa3 + ZZ-
//  Written in C++

// all the include statements that bits/stdc++.h uses
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>

// Import C++ libraries
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include<iomanip>

using namespace std;

void solution(){
    int d, e, f;
    cin >> d >> e >> f;
    vector<int> teachers(e);
    for(int j = 0; j < e; j++){
        cin >> teachers[j];
    }
    sort(teachers.begin(), teachers.end());
    int student_location;
    while (f--) {
        cin >> student_location;
        if (student_location < teachers[0]){
            cout << teachers[0] - 1 << "\n";
        } else if(student_location > teachers[teachers.size()-1]){
            cout << d - teachers[teachers.size() - 1] << "\n";
        } else {
            int p1 = 0;
            int p2 = e - 1;
            while (p1 <= p2){
                int center = (p1 + p2) / 2;
                if (teachers[center] > student_location and teachers[center - 1] < student_location){
                    cout << (teachers[center] - teachers[center - 1]) / 2 << "\n";
                    break;
                } else if (teachers[center] < student_location) {
                    p1 = center + 1;
                } else {
                    p2 = center - 1;
                }
            }
        }
    }
}


int main(){
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        solution();
    }
}
