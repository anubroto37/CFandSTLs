#include<bits/stdc++.h>
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
        vector<string> vs;
        string res;
        for(int i=0; i< n; i++){
            string s; cin >> s;
            vs.push_back(s);
        }
        for(auto &x : vs){
            int count =0;
            for(int i=1;i<x.size(); i++){
                string a = x.substr(0,i);
                string b = x.substr(i);
                //cout<< a << " " << b<< "\n";
                if(find(vs.begin(), vs.end(), a)!= vs.end() && 
                    find(vs.begin(), vs.end(), b)!= vs.end()){
                        count = 1; res.push_back('1'); break;
                    }
            }
            if(count == 0) res.push_back('0');
        }
        cout<<res<<endl;
    }
}