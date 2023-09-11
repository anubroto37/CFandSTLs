#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool dif( ll *p, ll *q, ll n){
    ll dif = 0;
    for(ll i=0; i<n ; i++){
        dif = max(dif, p[i] - q[i]);
    }
    for(ll i=0; i<n ; i++){
        p[i] -= dif;
        if(p[i] < 0) p[i] = 0;
    }
    for(ll i=0; i<n ; i++){
        if(p[i] != q[i]) return false;
    }
    return true;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n], b[n];
        for(ll i=0; i<n ; i++) cin >> a[i];
        for(ll i=0; i<n ; i++) cin >> b[i];
        if(dif(a, b, n) == true) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
