#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll t; cin >> t;
    while(t--){
        ll n, q; cin >> n >> q;
        ll arr[n], sum = 0;
        for(ll i=0 ; i< n ; i++){
             cin >> arr[i];
             sum += arr[i];
        }
        while(q--){
            ll l, r, k; cin >> l >> r >> k;
            ll sum2 = 0;
            for(ll i=l-1 ; i<=r-1 ; i++){
                sum2 += arr[i];
            }
            sum2 = sum - sum2 + k*(r-l +1);
            if(sum2 % 2 != 0) cout<< "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}