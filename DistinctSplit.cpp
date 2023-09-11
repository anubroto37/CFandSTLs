
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        set<char> s1, s2;
        for(auto &it : s){
            if(s1.find(it) != s1.end())
                s2.insert(it);
            else s1.insert(it);
        }
        cout<< s1.size()+s2.size() <<endl;
    }
       
    return 0;
}
