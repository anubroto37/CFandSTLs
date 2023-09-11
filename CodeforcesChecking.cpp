
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    set<char> st;
    st.insert('c');
    st.insert('o');
    st.insert('d');
    st.insert('e');
    st.insert('f');
    st.insert('r');
    st.insert('s');

    int t; cin>>t;
    while(t--){
        char ch; cin >> ch;
        if(st.find(ch) != st.end())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }	
    return 0;
}
