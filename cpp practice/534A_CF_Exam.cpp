/*
ID: zFa3
TASK: Exam
LANG: C++
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution(){
    ll a;
    cin>>a;
    if (a==3){
        cout<<2<<"\n";
        cout<<"1 3";
    } else if (a==2){
        cout<<"1\n";
        cout<<"1\n";
    } else if (a==1){
        cout<<"1\n";
        cout<<"1\n";
    } else if (a==4){
        cout<<"4\n";
        cout<<"3 1 4 2\n";
    } else {
        cout<<a<<"\n";
        if (a%2){ // if a=odd
            cout<<1<<' ';
            for (size_t i = 2; i <= a/2+1; i++)
            {
                cout<<i+a/2<<' ';
                cout<<i<<' ';
            }
        } else { // else
            for (size_t i = 1; i <= a/2; i++)
            {
                cout<<i<<' ';
                cout<<i+a/2<<' ';
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solution();
}