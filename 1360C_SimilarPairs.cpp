#include<bits/stdc++.h>
using namespace std;
bool findNext(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        if( find(v.begin(), v.end(), v[i]+1) != v.end() || 
            find(v.begin(), v.end(), v[i]-1) != v.end())
            return true;
    }
    return false;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr;
        int cEven =0 , cOdd = 0;
        for(int i=0; i<n; i++){
            int x; cin>> x;
            arr.push_back(x);
            if(x % 2 == 0) cEven++;
            else cOdd++;
        }
        if( cEven % 2 != 0 ){
            bool result = findNext(arr);
            if(result == true) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}