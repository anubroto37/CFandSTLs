#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long a, b;
    cin >>a >> b;
    long long c, factmin = 1;
    c = min(a,b);
    for(long long i=2; i<=c; i++) factmin *= i;
    cout<< factmin;
}

