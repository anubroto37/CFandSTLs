#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<ll> vect;
    ll a = 1e9, i=0, num=0;
    while(num < a){
        num = (3*i*i + i)/2; i++;
        vect.push_back(num);
    }
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        int count =0;
        while(n > 1){
            vector<ll>::iterator lower;
            lower = lower_bound(vect.begin(), vect.end(), n);
            if(n != vect[lower - vect.begin()])
                n -= vect[lower - vect.begin()-1];
            else
                n -=vect[lower - vect.begin()];
            count++;
        }
        cout<<count<<endl;
    }
    //for(ll j=0; j<i; j++) cout<< vect[j] <<" ";
}
    