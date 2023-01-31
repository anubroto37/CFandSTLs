// Ann has recently started commuting by subway. We know that a one ride subway ticket costs a rubles. Besides, Ann found out that she can buy a special ticket for m rides (she can buy it several times). It costs b rubles. Ann did the math; she will need to use subway n times. Help Ann, tell her what is the minimum sum of money she will have to spend to make n rides?

// Input
// The single line contains four space-separated integers n, m, a, b (1 ≤ n, m, a, b ≤ 1000) — the number of rides Ann has planned, the number of rides covered by the m ride ticket, the price of a one ride ticket and the price of an m ride ticket.

// Output
// Print a single integer — the minimum sum in rubles that Ann will need to spend.

// Examples
// inputCopy
// 6 2 1 2
// outputCopy
// 6
// inputCopy
// 5 2 2 3
// outputCopy
// 8

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int result1, result2;
    if( n <= m && b <= a ){
        result1 = a;
        result2 = b; 
    }
    else if(n <= m && a<b){
        result1 = b;
        result2 = n * a;
    }
    else if(n > m && a <= b){
        result1 = (n/m)*b + ((n % m) * a);
        result2 = n * a;
    }
    else{
        result1 = n * a;
        result2 = (n % m)? (n/m)*b + b: (n/m)*b;
    }
    //cout << result1 << " " << result2 << endl;
    if(result1 <= result2) cout << result1;
    else cout << result2;
}
