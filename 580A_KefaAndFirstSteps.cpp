// Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he makes ai money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

// Help Kefa cope with this task!

// Input
// The first line contains integer n (1 ≤ n ≤ 105).

// The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).

// Output
// Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.

// Examples
// inputCopy
// 6
// 2 2 1 3 4 1
// outputCopy
// 3
// inputCopy
// 3
// 2 2 9
// outputCopy
// 3

#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    long ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int count=1, maxCount=1;
    for(int i=1; i<n ;i++){
        if(ar[i-1]<= ar[i]){ 
            count++;
            maxCount = (maxCount < count)? count: maxCount;
        }
        else    count=1;
    }
    cout<< maxCount <<endl;
    return 0;
}
