// "You are given a 0-indexed integer array nums. In one operation, you may do the following:

//          Choose two integers in nums that are equal.
//          Remove both integers from nums, forming a pair.

// The operation is done on nums as many times as possible.

// Return a 0-indexed integer array answer of size 2 where answer[0] is the number of pairs that are formed 
//and answer[1] is the number of leftover integers in nums after doing the operation as many times as possible."

#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    vector <int> vect;
    for(int i=0; i< n ;i++){
        int x; cin >> x; vect.push_back(x);
    }
    map <int, int> freq;
    for(auto &it : vect) freq[it]++;

    //for(auto &it : freq) cout<< it.first << " " << it.second << endl;

    int isPair = 0, isSingle = 0;
    for(auto &it : freq){
        isPair += it.second / 2;
        isSingle += it.second % 2;
    }

    vector <int> result;
    result.push_back(isPair);
    result.push_back(isSingle); 
    cout<< "No. of pairs : "<< result[0] <<endl;
    cout << "No. of singles: " << result[1] <<endl;
}