#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        char ch = '0';
        for(int i=0 ; i<n; i++){
            if(s[i] != '0' || s[i] != '1'){
                for(int j=i+1; j<n; j++){
                    if(s[i] == s[j]) s[j] = ch;
                }
                s[i] = ch;
            }
            if(ch == '0') ch = '1';
            else if(ch == '1') ch = '0';
        }
        cout<< s << endl;
    }
    return 0;
}