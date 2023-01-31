#include<bits/stdc++.h>
using namespace std;
vector <int> pArray;
int main(){
    for(int i=2; i<=50; i++){
        int flag=0, c=0;
        for(int j=1; j<i; j++){
            if(i%j == 0) flag++;
            if(flag > 1){
                c++;
                break;
            }                
        }
        if(c==0){
            pArray.push_back(i);
        }
    }
    //for(int i=0; i<pArray.size(); i++) cout<< pArray[i] << " ";
    int n, m;
    cin >> n >> m;
    for(int i=0; i<pArray.size()-1; i++){
        if(pArray[i] == n && pArray[i+1]==m) cout<< "YES";
        else if(pArray[i] == n && pArray[i+1]!=m) cout<< "NO";
    }
}