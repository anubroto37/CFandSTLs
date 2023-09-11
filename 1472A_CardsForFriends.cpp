// For the New Year, Polycarp decided to send postcards to all his n
//  friends. He wants to make postcards with his own hands. For this purpose, he has a sheet of paper of size w×h
// , which can be cut into pieces.

// Polycarp can cut any sheet of paper w×h
//  that he has in only two cases:

// If w
//  is even, then he can cut the sheet in half and get two sheets of size w2×h
// ;
// If h
//  is even, then he can cut the sheet in half and get two sheets of size w×h2
// ;
// If w
//  and h
//  are even at the same time, then Polycarp can cut the sheet according to any of the rules above.

// After cutting a sheet of paper, the total number of sheets of paper is increased by 1
// .

// Help Polycarp to find out if he can cut his sheet of size w×h
//  at into n
//  or more pieces, using only the rules described above.

// Input
// The first line contains one integer t
//  (1≤t≤104
// ) — the number of test cases. Then t
//  test cases follow.

// Each test case consists of one line containing three integers w
// , h
// , n
//  (1≤w,h≤104,1≤n≤109
// ) — the width and height of the sheet Polycarp has and the number of friends he needs to send a postcard to.

// Output
// For each test case, output on a separate line:

// "YES", if it is possible to cut a sheet of size w×h
//  into at least n
//  pieces;
// "NO" otherwise.
// You can output "YES" and "NO" in any case (for example, the strings yEs, yes, Yes and YES will be recognized as positive).

// Example
// inputCopy
// 5
// 2 2 3
// 3 3 2
// 5 10 2
// 11 13 1
// 1 4 4
// outputCopy
// YES
// NO
// YES
// YES
// YES

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
        int w, h; long n;
        cin >> w >> h >> n;

        if(w % 2 != 0 &&  h % 2 != 0 && n != 1) cout<< "NO" <<endl;
        else if(w % 2 != 0 &&  h % 2 != 0 && n == 1) cout<< "YES" <<endl;
        else{
            long count = 1;
            while(w % 2 == 0){
                    w /= 2; count *=2;
            }
            while(count <= n && h % 2 == 0){
                h /= 2; count *=2;
            }
            if(count >= n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}