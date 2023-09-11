#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int a = ((i + 1) % 4 < 2)? 0: 1;
                int b = ((j + 1) % 4 < 2)? 0: 1;
                if (a == b) cout << 0 <<" ";
                else cout << 1 <<" ";
            }
            cout << "\n";
        }
    }
}