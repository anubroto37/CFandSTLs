#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int s, n;
    cin >> s >>n;
    vector<pair<int, int>> vp;
    for(int i=0 ; i<n; i++){
        int x, y; cin >> x >> y;
        vp.push_back(make_pair(x,y));
    }
    sort(vp.begin(), vp.end());
    int count=0;
    for(auto it: vp){        
        if(s > it.first) s += it.second;
        else break; count++;
        //cout<< it.first << " "<< it.second<< endl;
    }
    if(count == n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}