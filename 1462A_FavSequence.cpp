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
        long long arr[n];
        for(int i=0 ; i<n; i++) cin >> arr[i];
        long long front = 0, end = n-1;
        vector<long long> vect;
        //if(front == end) vect.push_back(arr[front]);
        
            while(front < end){
                vect.push_back(arr[front]);
                vect.push_back(arr[end]);
                front++; end--;
            }
            if(n % 2 !=0) vect.push_back(arr[n/2]);
        
        for(auto &it : vect) cout<< it << " ";
        cout<<endl;
    }
}