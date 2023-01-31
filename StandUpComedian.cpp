// Eve is a beginner stand-up comedian. Her first show gathered a grand total of two spectators: Alice and Bob.

// Eve prepared a1+a2+a3+a4
//  jokes to tell, grouped by their type:

// type 1: both Alice and Bob like them;
// type 2: Alice likes them, but Bob doesn't;
// type 3: Bob likes them, but Alice doesn't;
// type 4: neither Alice nor Bob likes them.
// Initially, both spectators have their mood equal to 0
// . When a spectator hears a joke he/she likes, his/her mood increases by 1
// . When a spectator hears a joke he/she doesn't like, his/her mood decreases by 1
// . If the mood of a spectator becomes negative (strictly below zero), he/she leaves.

// When someone leaves, Eve gets sad and ends the show. If no one leaves, and Eve is out of jokes, she also ends the show.

// Thus, Eve wants to arrange her jokes in such a way that the show lasts as long as possible. Help her to calculate the maximum number of jokes she can tell before the show ends.

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of testcases.

// The only line of each testcase contains four integers a1,a2,a3,a4
//  (0≤a1,a2,a3,a4≤108
// ; a1+a2+a3+a4≥1
// ) — the number of jokes of each type Eve prepared.

// Output
// For each testcase, print a single integer — the maximum number of jokes Eve can tell before at least one of the spectators leaves or before she runs out of jokes.

// Example
// inputCopy
// 4
// 5 0 0 0
// 0 0 0 5
// 2 5 10 6
// 3 0 0 7
// outputCopy
// 5
// 1
// 15
// 7

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >>t;
    while(t--){
        long long alice=0, bob=0;
        vector<long long> vect;
        for(int i=0; i<4; i++){
            long long x; cin >> x;
            vect.push_back(x);
        }
        long long jokes=0;
        int flag = 0;
        for(int i=0; i<4; i++){
            switch(i){
                case 1:
                    alice += vect[i];
                    bob += vect[i];
                    jokes += vect[i];
                    break;

                case 2:
                    alice += vect[i];
                    if( (vect[i] - bob) < 0){
                        jokes = jokes + bob + 1;
                        flag = 1;
                        break;
                    }
                    else{
                        bob -= vect[i];
                        jokes += vect[i];
                    }
                    break;

                case 3:
                    bob += vect[i];
                    if( (vect[i] - alice) < 0){
                        jokes = jokes + alice + 1;
                        flag = 1;
                        break;
                    }
                    else{
                        alice -= vect[i];
                        jokes += vect[i];
                    }
                    break;

                case 4:
                    if((vect[i] - bob) < 0 || (vect[i] - alice) < 0){
                        jokes = jokes + (alice < bob)? alice: bob + 1;
                        flag = 1;
                        break;
                    }
                    else{
                        jokes += vect[i];
                    }
                    break;
            }
            if(flag == 1) break;
        }

        
        cout << jokes << endl;
   }
}