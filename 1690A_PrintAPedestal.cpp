// Given the integer n
//  — the number of available blocks. You must use all blocks to build a pedestal.

// The pedestal consists of 3
//  platforms for 2
// -nd, 1
// -st and 3
// -rd places respectively. The platform for the 1
// -st place must be strictly higher than for the 2
// -nd place, and the platform for the 2
// -nd place must be strictly higher than for the 3
// -rd place. Also, the height of each platform must be greater than zero (that is, each platform must contain at least one block).

// Example pedestal of n=11
//  blocks: second place height equals 4
//  blocks, first place height equals 5
//  blocks, third place height equals 2
//  blocks.
// Among all possible pedestals of n
//  blocks, deduce one such that the platform height for the 1
// -st place minimum as possible. If there are several of them, output any of them.

// Input
// The first line of input data contains an integer t
//  (1≤t≤104
// ) — the number of test cases.

// Each test case contains a single integer n
//  (6≤n≤105
// ) — the total number of blocks for the pedestal. All n
//  blocks must be used.

// It is guaranteed that the sum of n
//  values over all test cases does not exceed 106
// .

// Output
// For each test case, output 3
//  numbers h2,h1,h3
//  — the platform heights for 2
// -nd, 1
// -st and 3
// -rd places on a pedestal consisting of n
//  blocks (h1+h2+h3=n
// , 0<h3<h2<h1
// ).

// Among all possible pedestals, output the one for which the value of h1
//  minimal. If there are several of them, output any of them.

// Example
// inputCopy
// 6
// 11
// 6
// 10
// 100000
// 7
// 8
// outputCopy
// 4 5 2
// 2 3 1
// 4 5 1
// 33334 33335 33331
// 2 4 1
// 3 4 1

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
        int n; cin >> n;
        int a, b, c;
        if( n % 3 == 2){
            a = n / 3 + 2;
            b = n / 3 + 1;
            c = n / 3 - 1;
        }
        else if ( n % 3 == 1){
            a = n / 3 + 2;
            b = n / 3;
            c = n / 3 - 1;
        }
        else{
            a = n / 3 + 1;
            b = n / 3;
            c = n / 3 - 1;
        }

        cout<< b <<" " << a << " " << c <<endl;
    }
    return 0;
}