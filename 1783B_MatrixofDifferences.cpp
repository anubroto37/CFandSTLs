// For a square matrix of integers of size n×n
// , let's define its beauty as follows: for each pair of side-adjacent elements x
//  and y
// , write out the number |x−y|
// , and then find the number of different numbers among them.

// For example, for the matrix (1432)
//  the numbers we consider are |1−3|=2
// , |1−4|=3
// , |3−2|=1
//  and |4−2|=2
// ; there are 3
//  different numbers among them (2
// , 3
//  and 1
// ), which means that its beauty is equal to 3
// .

// You are given an integer n
// . You have to find a matrix of size n×n
// , where each integer from 1
//  to n2
//  occurs exactly once, such that its beauty is the maximum possible among all such matrices.

// Input
// The first line contains a single integer t
//  (1≤t≤49
// ) – the number of test cases.

// The first (and only) line of each test case contains a single integer n
//  (2≤n≤50
// ).

// Output
// For each test case, print n
//  rows of n
//  integers — a matrix of integers of size n×n
// , where each number from 1
//  to n2
//  occurs exactly once, such that its beauty is the maximum possible among all such matrices. If there are multiple answers, print any of them.

// Example
// inputCopy
// 2
// 2
// 3
// outputCopy
// 1 3
// 4 2
// 1 3 4
// 9 2 7
// 5 8 6

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >>t;
    while(t--){
        int n; cin >> n;
        int count1=1, count2 = pow(n,2);
        for(int i=0; i<n; i++){
            if(i%2 == 0){
                for(int j=0; j<n; j++){
                    if((i+j) % 2 == 0)
                        cout<< count2-- << " ";
                    else
                        cout << count1++ << " ";
                }
                cout<< endl;
            }
            else{
                for (int j = n - 1; j >= 0; --j) {
                    if((i+j) % 2 == 1)
                        cout<< count2-- << " ";
                    else
                        cout << count1++ << " ";
                }
                cout<< endl;
            }
        }
    }
}

        
        
