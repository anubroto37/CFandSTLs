// First Letter to Appear Twice

#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s; cin >> s;
    set <char> st;
    for(int i=0; i<s.size(); i++){
        if(st.find(s[i]) != st.end()){
            cout << "First letter to appear twice: " << s[i]; 
            break;
        }
        st.insert(s[i]);
    }
}