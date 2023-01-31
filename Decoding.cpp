#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string str; cin >> str;
    int len= str.length();
    while(len!=0){
        cout << str[len/2];
        str.erase(str.begin()+ (len/2));
        len = str.length();
    }
    return 0;
}
