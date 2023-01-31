// Polycarpus has a ribbon, its length is n. He wants to cut the ribbon in a way that fulfils the following two conditions:

// After the cutting each ribbon piece should have length a, b or c.
// After the cutting the number of ribbon pieces should be maximum.
// Help Polycarpus and find the number of ribbon pieces after the required cutting.

// Input
// The first line contains four space-separated integers n, a, b and c (1 ≤ n, a, b, c ≤ 4000) — the length of the original ribbon and the acceptable lengths of the ribbon pieces after the cutting, correspondingly. The numbers a, b and c can coincide.

// Output
// Print a single number — the maximum possible number of ribbon pieces. It is guaranteed that at least one correct ribbon cutting exists.

// Examples
// inputCopy
// 5 5 3 2
// outputCopy
// 2
// inputCopy
// 7 5 5 2
// outputCopy
// 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c; cin >> n >> a>> b >> c;
    int resA, resB, resC;
    if(n % a== 0) resA = n/a;
    if( ) cout<< 2;
    else if(a+b+c==n) cout<< 3;
    else cout<< 1;
}