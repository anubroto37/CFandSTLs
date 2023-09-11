#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    map<int,int> mp;
    while(n--){
        int x; cin >> x;
        mp[x]++;
    }
    vector<pair<int, int>> vf;
    int b;
    for(auto &it: mp) vf.push_back(make_pair(it.first, it.second));
    b = vf[vf.size()-1].first;
    if(vf[vf.size()-1].second == 2){
        cout<< b << " "<< b;
    }
    else{
        int hcf, a;
        for(int i=vf.size()-1; i>=0; i--){
            if(vf[i].second == 2){
                hcf = vf[i].first;
                break;
            }
        }
        //if(hcf == 1) cout<<b<< " "<< 1;
        //else{
            for(int i=vf.size()-2; i>=0; i--){
                if(vf[i].first % hcf == 0 && vf[i].second != 2){
                    a = vf[i].first;
                    break;
                }
            }
            cout<<b<< " "<< a;
        //}
    }
}