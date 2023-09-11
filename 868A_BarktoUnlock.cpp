#include<bits/stdc++.h>
using namespace std;

bool unlock(vector<string> &v, string &m){
    int flag1 = 0, flag2 = 0;
    for(auto &it: v){
        if( (it[0] == m[1] && it[1]==m[0]) || it.compare(m) == 0 ) return true;
        if( it[1] == m[0]) flag1 =1;
        else if(it[0] == m[1]) flag2 = 1;
    }
    if(flag1 == 1 && flag2 == 1) return true;
    return false;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string main; cin >> main;
    vector<string> s;
    int n; cin >> n;

    while(n--){
        string w; cin >> w;
        s.push_back(w);
    }
    
    if(unlock(s, main) == true) cout<<"YES\n";
    else cout<<"NO\n";
}