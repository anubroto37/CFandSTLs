#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long arr[n];
        for(long long i=0; i<n; i++) cin >> arr[i];
        long long m; cin >> m;
        long long sum = 0;
        while(m--){
            long long x; cin >> x;
            sum += x;
        }
        cout << arr[ sum%n] <<endl;
    }
    return 0;
}