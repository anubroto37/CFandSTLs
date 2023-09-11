#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t; cin >> t;
    while(t--){
        long long n, z, maxZ;
        cin >> n >> z;
        maxZ = z;
        vector<long long> vect;
        for(long long i=0 ; i<n; i++){
            long long x;
            cin >> x;
            vect.push_back(x);
            vect[i] |= z;
            maxZ = (maxZ < vect[i])? vect[i]: maxZ;
        }
        cout<< maxZ <<endl;
    }
}
