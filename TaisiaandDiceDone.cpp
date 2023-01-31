#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n,s,r; cin >> n>> s>> r;
        int max = s-r;
        vector<int> v(n,max);
        int space = n;
        int sum=(s-r)*n;    
        do
        {
            if(sum>s)
            {
                if(v[space-1] > 1){
                    v[space-1]--;
                    sum--;
                }
                else space--;
            }
            else break;
        }while(sum>s);
        for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
    
        cout<<endl;
    }

    return 0;
}
