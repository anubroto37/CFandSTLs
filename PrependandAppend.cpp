
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int left=0, right=n-1, minS = n;
        while(left < right){
            if((s[left] == '0' && s[right]=='1') ||
                (s[left] == '1' && s[right]=='0')){
                    left++;
                    right--;
                    minS-=2;
                }
            else break;
        }
        cout<< minS <<endl;
    }
       
    return 0;
}
