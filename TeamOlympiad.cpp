#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> elements;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        elements.push_back(x);
    }
    int team=0;
        vector <vector<int>> teamPosition;
    while(n!=0){
        int flag=0;
        for(int j=1 ; j<=3 ; j++){
            vector<int> :: iterator pos = find(elements.begin(), elements.end(), j);
            if( pos != elements.end()){
                teamPosition[team].push_back(*pos + 1);
                elements.erase(pos);
            }
            else{
                flag++;
                break;
            }
        }
        if(flag == 0){ n-=3; team++; }
        else break;
    }
    cout<< team << "/n";
    // for(int i=0; i<team; i++){
    //     for(int j=0; j<teamPosition[i].size(); j++)
    //         cout<< teamPosition[i][j] << " ";
    //     cout<< "/n";
    // }
    return 0;
}