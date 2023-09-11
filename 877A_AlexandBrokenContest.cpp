#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s; cin >> s;
    vector <string> word={"Danil", "Olya", "Slava", "Ann", "Nikita"};
    int count=0;
    //map <string,int> mp;
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s.find(word[j],i)!= string::npos)
                {
                    count++;
                    i+=s.find(word[j],i);
                }
        }
    }
    if(count==1)    cout<<"YES";
    else cout<<"NO";
    return 0;
}