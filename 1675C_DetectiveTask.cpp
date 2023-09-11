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
        string s; cin >> s;
        int len = s.size();
        int posZero = -1, posOne = -1;
        for(int i=len-1; i>=0; i--){
            if(s[i] == '0'){
                posZero = i;
            }
        }
        for(int i=0; i<len; i++){
            if(s[i] == '1'){
                posOne = i;
            }
        }        
        
        if(posZero == -1 && posOne == -1) cout<< len <<"\n";
        else if(posZero == -1) cout<< len - posOne<< "\n";
        else if(posOne == -1) cout<< posZero + 1<<"\n";       
        else cout<< posZero - posOne + 1<<"\n";
    }
}
