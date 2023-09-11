#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    string s; cin >> s;
    vector<string> vs;
    int count=0, flag = 0;
    string word;
    int i;
    for(i=0; i<s.size(); i++){
        for(int j=0; j<vs.size();j++){
            if(s[i] == vs[j][0]){
                flag=1; break;
            }                
        }
        if(flag == 1){
            word+=s[i];
            vs.pop_back();
            vs.push_back(word); flag = 0;
        }
        else{
            word = s[i];
            vs.push_back(word);
        }
        if(vs.size() > n-1) break;
    }
    if(vs.size() < n) cout<<"NO\n";
    else{
        vs.pop_back();
        word += s.substr(i+1);
        vs.push_back(word);
        cout<<"YES\n";
        for(int i=0; i<vs.size(); i++) cout<<vs[i] <<endl;
    }  
}