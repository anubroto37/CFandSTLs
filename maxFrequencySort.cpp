// "Given a string s, sort it in decreasing order based on the frequency of the characters 
// If there are multiple answers, return any of them.

// Input: s = ""tree""
// Output: ""eert""
// Explanation: 'e' appears twice while 'r' and 't' both appear once.
// So 'e' must appear before both 'r' and 't'. Therefore ""eetr"" is also a valid answer."


#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<char,int> a, pair<char, int> b){
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s; cin >> s;
    map <char, int> mp;

    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    vector <pair <char, int>> vp;
    for(auto &it : mp){
        vp.push_back(make_pair(it.first, it.second));
    }
    sort(vp.begin(), vp.end(), comparator);

    stringstream buffer;
    for(int i=0; i<vp.size(); i++){
        for(int j=0; j<vp[i].second ; j++)
            buffer << vp[i].first;
    }
    cout << buffer.str();
}