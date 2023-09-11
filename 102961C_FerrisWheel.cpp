#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n, x; cin >> n >> x;
    int count = 0;
    vector<ll> arr;
    for(ll i =0;i < n; i++){
        ll a; cin >> a; arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    ll front=0, end = n-1;
    while(front<=end){
        if(arr[front] + arr[end] <= x){
            count++; front++; end--;
        }
        else{
            count++; end--;
        }
    }
    
    cout << count;
}