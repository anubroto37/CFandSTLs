// We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.

// You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.

// Input
// The first line contains a single positive integer, n (1 ≤ n ≤ 105), showing how many numbers are in the array. The next line contains n space-separated integers xi (1 ≤ xi ≤ 1012).

// Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is advised to use the cin, cout streams or the %I64d specifier.

// Output
// Print n lines: the i-th line should contain "YES" (without the quotes), if number xi is Т-prime, and "NO" (without the quotes), if it isn't.

// Examples
// inputCopy
// 3
// 4 5 6
// outputCopy
// YES
// NO
// NO

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t; cin >> t;
    while(t--){
        long long a; cin >> a;
        int count = 0;

        for(long long i=2 ; i<a ;i++){
            if(a % i == 0) count++;
        }
        if( count == 1) cout<< "YES" << endl;
        else cout << " NO" << endl;
    }
}