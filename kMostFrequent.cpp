//Given an integer array nums and an integer k, return the k most frequent elements. 
//You may return the answer in any order.

#include<bits/stdc++.h>
using namespace std;
bool Descend(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second) return a.second > b.second; 
    return a.first < b.second;
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n; //size of array
    int k; cin >> k; // most frequent 
    vector <int> vect;
    vect.reserve(n);

    for(int i=0; i<n; i++){
        int x; cin >> x; vect.push_back(x); 
    }

    map <int,int> freq;
    for(int i=0 ;i<n; i++) freq[vect[i]]++;

    vector < pair<int, int> > vectpair;
    for(auto &it : freq){
        vectpair.push_back(make_pair(it.first, it.second));
    }

    sort(vectpair.begin(), vectpair.end(), Descend);
    for(int i=0; i<k ; i++){
        cout<< vectpair[i].first << " ";
    }
}




