#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m, o; cin >> n;
    m = n-1; o= n-2;
    long long sum1=0,  sum2 = 0, sum3=0;
    while(n--){
        long x; cin >> x; sum1 += x;
    }
    while(m--){
        long x; cin >> x; sum2 += x;
    }
    while(o--){
        long x; cin >> x; sum3 += x;
    }
    cout<< sum1-sum2 <<"\n"<< sum2-sum3<<endl;
    return 0;
}
    