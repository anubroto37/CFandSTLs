// Given an array of integers nums, sort the array in increasing order based on the frequency of the values. 
//If multiple values have the same frequency, sort them in decreasing order.

#include<bits/stdc++.h>
using namespace std;
bool compSort(pair<char,int> a, pair<char, int> b){
    if(a.second != b.second) return a.second < b.second;
    return a.first > b.first;
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    vector <int> vect;
    vect.reserve(n);
    for(int i=0; i<n ;i++){
        int x; cin >> x; vect.push_back(x);
    }

    map <int,int> map;
    for(int i=0 ;i<n; i++) map[vect[i]]++;
    
    //for(auto &it : map){ cout<< it.first << " " << it.second <<endl; }
    vector < pair<int, int> > vectpair;
    for(auto &it : map){
        vectpair.push_back(make_pair(it.first, it.second));
    }

    sort(vectpair.begin(), vectpair.end(), compSort);
    for(auto &it : vectpair){ cout<< it.first << " " ; }
}





