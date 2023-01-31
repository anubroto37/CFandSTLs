//First Unique character in string

#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s; cin >> s;
    map <char, int> mp;
    for( auto &it : s) mp[it]++;

    for( auto &it : s){
        if( mp.find(it) != mp.end() && mp[it] == 1){
            cout<< "First unique element: " << it;
            break;
        }
    }
}