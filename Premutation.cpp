// A sequence of n
//  numbers is called permutation if it contains all integers from 1
//  to n
//  exactly once. For example, the sequences [3,1,4,2
// ], [1
// ] and [2,1
// ] are permutations, but [1,2,1
// ], [0,1
// ] and [1,3,4
// ] — are not.

// Kristina had a permutation p
//  of n
//  elements. She wrote it on the whiteboard n
//  times in such a way that:

// while writing the permutation at the i
// -th (1≤i≤n)
//  time she skipped the element pi
// So, she wrote in total n
//  sequences of length n−1
//  each.
// For example, suppose Kristina had a permutation p
//  = [4,2,1,3]
//  of length 4
// . Then she did the following:

// Wrote the sequence [2,1,3]
// , skipping the element p1=4
//  from the original permutation.
// Wrote the sequence [4,1,3]
// , skipping the element p2=2
//  from the original permutation.
// Wrote the sequence [4,2,3]
// , skipping the element p3=1
//  from the original permutation.
// Wrote the sequence [4,2,1]
// , skipping the element p4=3
//  from the original permutation.
// You know all n
//  of sequences that have been written on the whiteboard, but you do not know the order in which they were written. They are given in arbitrary order. Reconstruct the original permutation from them.

// For example, if you know the sequences [4,2,1]
// , [4,2,3]
// , [2,1,3]
// , [4,1,3]
// , then the original permutation will be p
//  = [4,2,1,3]
// .

// Input
// The first line of input data contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The description of the test cases follows.

// The first line of each test case contains one integer n
//  (3≤n≤100
// ).

// This is followed by n
//  lines, each containing exactly n−1
//  integers and describing one of the sequences written out on the whiteboard.

// It is guaranteed that all sequences could be obtained from some permutation p
// , and that the sum n2
//  over all input sets does not exceed 2⋅105
// .

// Output
// For each test case, output on a separate line a permutation p
//  such that the given n
//  sequences could be obtained from it.

// It is guaranteed that the answer exists and it is the only one. In other words, for each test case the required permutation is sure to exist.

// Example
// inputCopy
// 5
// 4
// 4 2 1
// 4 2 3
// 2 1 3
// 4 1 3
// 3
// 2 3
// 1 3
// 1 2
// 5
// 4 2 1 3
// 2 1 3 5
// 4 2 3 5
// 4 1 3 5
// 4 2 1 5
// 4
// 2 3 4
// 1 3 4
// 1 2 3
// 1 2 4
// 3
// 2 1
// 1 3
// 2 3
// outputCopy
// 4 2 1 3 
// 1 2 3 
// 4 2 1 3 5 
// 1 2 3 4 
// 2 1 3 

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);   

    int t; cin >> t;
    while(t--){
        vector <vector<int>> v;
        set <int> premutation;
        int n; cin >> n;

        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                int x; cin >> x;
                //v[i].push_back(x);
                premutation.insert(x);
            }
        }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n-1; j++){
        //         premutation.insert(v[i][j]);
        //     }
        // }

        for( auto it : premutation)
            cout<< it << " ";
        cout<< endl;
    }
    return 0;
}
