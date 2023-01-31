// Given a number N. Print the prime factors of N in the following form: (P1)x * (P2)y * (P3)z * ...
// Note: P1, P2, ..., Pi are prime factors of N.
// For example:
// If N = 1260: 1260 = 2*2*3*3*5*7 then print (2^2)*(3^2)*(5^1)*(7^1).
// Input
// Only one line contains a number N (2 ≤ N ≤ 2 * 10^7).
// Output
// Print N in this form (P1)x * (P2)y * (P3)z * ...
// Examples
// inputCopy
// 1260
// outputCopy
// (2^2)*(3^2)*(5^1)*(7^1)
// inputCopy
// 1677060
// outputCopy
// (2^2)*(3^2)*(5^1)*(7^1)*(11^3)
// inputCopy
// 1299721
// outputCopy
// (1299721^1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int pnos[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int n; cin >> n;
    vector <int> powers (10,0);
    int i=0;
    while(n!=1){
        if(n % pnos[i] == 0){
            n /= pnos[i];
            powers[i]++;
        }
        else i++;
    }
    //cout << n;
    // for(int j=0; j<10 ; j++)
    //     cout<< powers[j] << " ";
    stringstream buffer;
    for(int j=0; j<=i; j++){
        buffer << "(" << pnos[j] << "^" << powers[j] << ")*";
    }
    string ss = buffer.str();
    ss.pop_back();
    cout << ss;

    return 0;
}
