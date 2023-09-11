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
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n ;i++) cin >> arr[i];
        int i=0, count1=0, count2 = 0;
        for(int i=0 ; i<n; i++){
            if(i % 2 == 0 && arr[i] % 2 != 0) count1++;
            else if(i % 2 != 0 && arr[i] % 2 == 0) count2++;
        }
        if( count1 != count2) cout<< -1<< endl;
        else cout<< count1 << endl;
    }
}
