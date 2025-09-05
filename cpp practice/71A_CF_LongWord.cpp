/*

#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    int loop;
    cin >> loop;
    while (loop--){
        string str;
        cin >> str;
        if (str.length() > 10){
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        } else {
            cout << str << endl;
        }
    }
    return 0;
}

#include <iostream> 
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        string b;
        cin >> b;
        if (b.length() < 11){
            cout << (b) << endl;
        }  else{
            cout << b[0] << b.length()-2 << b[b.length()-1] << endl;
        }

    }
    return 0;


}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <string>

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (word.length() 234> 10) {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        } else {
            cout << word << endl;
        }
    }

   return 0;
}



*/


#include <iostream> 
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string b;
        cin >> b;
        if (b.length() <= 10){
            cout << (b) << endl;
        }  else{
            cout << b[0] << b.length()-2 << b[b.length()-1] << endl;
        }

    }
    return 0;


}