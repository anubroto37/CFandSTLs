// You are a lover of bacteria. You want to raise some bacteria in a box.

// Initially, the box is empty. Each morning, you can put any number of bacteria into the box. And each night, every bacterium in the box will split into two bacteria. You hope to see exactly x bacteria in the box at some moment.

// What is the minimum number of bacteria you need to put into the box across those days?

// Input
// The only line containing one integer x (1 ≤ x ≤ 109).

// Output
// The only line containing one integer: the answer.

// Examples
// inputCopy
// 5
// outputCopy
// 2
// inputCopy
// 8
// outputCopy
// 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin >> n;
    int result=0;
    while( n!=0){
        if( n % 2== 1) result++;
        n /= 2;
    }
    cout << result;
}
