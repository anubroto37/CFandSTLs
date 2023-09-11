
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t; cin>>t;
    while(t--){
         pair <int, int> p;
        p.first=0; p.second=0;
        int n; cin >> n;
        string s; cin >> s;
        int flag = 0;
        for(auto &it : s){
            
            if(it == 'U') p.first++;
            else if(it=='D') p.first--;
            else if(it == 'R') p.second++;
            else if(it == 'L') p.second--;

            if(p.first == 1 && p.second == 1){
                cout<< "YES" <<endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout<<"NO"<< endl;
    }
       
    return 0;
}
