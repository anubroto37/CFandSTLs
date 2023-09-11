#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, m, k, count = 0; cin >> n >>m >>k;
    vector<ll> vn, vm;
    for(ll i=0; i<n ; i++){
        int x; cin >> x; vn.push_back(x);
    }
    for(ll i=0; i<m ; i++){
        int x; cin >> x; vm.push_back(x);
    }
    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());

    for(ll i=0; i<n ; i++){
        for(ll j=0; j< m; j++){
            if( vn[i]-k <= vm[j] && vm[j] <= vn[i]+k){
                count++;
                vm.erase(vm.begin()+j);
                break;
            }
        }
    }
    cout<< count;
}