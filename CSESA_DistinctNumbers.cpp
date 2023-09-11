#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n; cin>> n;
    set<ll> s;
    while(n--){
        ll x; cin >> x;
        s.insert(x);
    }
    cout<<s.size();
}