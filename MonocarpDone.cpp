// Monocarp is playing a computer game. He's going to kill n
//  monsters, the i
// -th of them has hi
//  health.

// Monocarp's character has two spells, either of which he can cast an arbitrary number of times (possibly, zero) and in an arbitrary order:

// choose exactly two alive monsters and decrease their health by 1
// ;
// choose a single monster and kill it.
// When a monster's health becomes 0
// , it dies.

// What's the minimum number of spell casts Monocarp should perform in order to kill all monsters?

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of testcases.

// The first line of each testcase contains a single integer n
//  (1≤n≤100
// ) — the number of monsters.

// The second line contains n
//  integers h1,h2,…,hn
//  (1≤hi≤100
// ) — the health of each monster.

// The sum of n
//  over all testcases doesn't exceed 2⋅104
// .

// Output
// For each testcase, print a single integer — the minimum number of spell casts Monocarp should perform in order to kill all monsters.

// Example
// inputCopy
// 3
// 4
// 1 2 1 2
// 3
// 2 4 2
// 5
// 1 2 3 4 5
// outputCopy
// 3
// 3
// 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> vect;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            vect.push_back(x);
        }
        int countone=0;
        for(int i=0; i<n; i++){
            if(vect[i] == 1) countone++;
        }
        int spellCast = (n - countone) + (ceil)(1.0 * countone / 2);
        cout << spellCast << endl;
    }
}