#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m; cin >> n >> m;
    set<int> st;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=n-1; i>=0; i--){
        st.insert(arr[i]);
        arr[i] = st.size();
    }    
    while(m--){        
        int pos; cin >> pos;        
        cout<< arr[pos-1]<<"\n";
    }
}
