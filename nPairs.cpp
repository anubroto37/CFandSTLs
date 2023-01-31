// "You are given an integer array nums consisting of 2 * n integers.

// You need to divide nums into n pairs such that:

//        Each element belongs to exactly one pair.
//        The elements present in a pair are equal.
// Return true if nums can be divided into n pairs, otherwise return false."

#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector <int> vect;
    int n; cin >> n;
    for(int i=0; i< 2*n; i++){
        int x; cin >> x;
        vect.push_back(x);
    }
    map <int, int> mp;
    for(auto &it: vect) mp[it]++; 

    int flag=0;
    for(auto &it : mp){
        if(it.second % 2 != 0){ flag=1;  cout<< "false"; break; }
    }
    if(flag == 0) cout<< "true";
}

