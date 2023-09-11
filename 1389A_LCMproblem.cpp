#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long t;
    cin >> t;
    while(t--){
        long long l, r;
        cin >> l >> r;
        if(l*2 <= r) cout<< l << " " << 2*l <<endl;
        else cout<< -1 << " "<< -1 <<endl;
    }
    return 0;
}