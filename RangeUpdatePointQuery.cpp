
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t; cin>>t;
    while(t--){
        long n, q; cin >> n >> q;
        vector <long> vect;
        for(auto &it : vect){
            long x; cin >> x;
            vect.push_back(x);
        }
        while(q--){
            int choice; cin >> choice;
            switch(choice){
                case 1:
                    long front, end;
                    cin >> front >> end;
                    front--;
                    end--;
                    for(long i=front; i<=end; i++){
                        long m = vect[i];
                        long sum = 0;
                        while(m!=0){
                            sum += m%10;
                            m/=10;
                        }
                        vect[i] = sum;
                    }
                    break;
                case 2:
                    long index; cin >> index;
                    index--;
                    cout << vect[index] << endl;
                    break;
            }
        }
    }
       
    return 0;
}
