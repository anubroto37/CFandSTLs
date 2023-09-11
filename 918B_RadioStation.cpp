#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, m; cin >> n >> m;
    vector<pair<string, string>> vect;
    vector<pair<string, string>> command;

    for(int i=0; i<n; i++){
        string x, y; cin >> x >> y;
        vect.push_back(make_pair(x, y));
    }

    for(int i=0; i<m; i++){
        string x, y; cin >> x >> y;
        y.pop_back();
        command.push_back(make_pair(x, y));
    }

    for(auto &it: command){
        for(auto &x : vect){
            if(it.second.compare(x.second)== 0){ 
                cout<< it.first<<" "<<it.second<<"; #"<<x.first<<endl;
                break;
            }
        }
    }
    return 0;
}