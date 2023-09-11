#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s; cin >> s;
    for(int i=0 ; i<s.size()+1; i++){
        for(int j=0; j<26 ; j++){
            char ch = (char)('a' + j);
            string word = s.substr(0, i) + ch + s.substr(i);
            //cout<<word<<" ";
            string wcopy = word;
            reverse(word.begin(), word.end());
            if( word.compare(wcopy) == 0){
                cout<< wcopy; return 0;
            }
        }
    }
    cout<<"NA";
    return 0;
}