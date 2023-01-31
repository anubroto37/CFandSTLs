//3.141592653589793238462643383279

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string pi = "3141592653589793238462643383279";
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int count=0;
        for(int i=0; i<s.size(); i++){
            if( s[i]== pi[i]) count++;
            else break;
        }
        cout<< count << endl;
    }
    return 0;
}
