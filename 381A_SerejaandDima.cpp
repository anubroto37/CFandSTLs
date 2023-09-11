#include <bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;
    int arr[n], flag=0;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    long sumS=0, sumD=0;
    int front = 0, end = n-1;
    while(front<=end){
        if(flag == 0){
            if(arr[front] > arr[end]){
                sumS += arr[front]; front++;
            }
            else{
                sumS += arr[end]; end--;
            }
            flag = 1;
        }
        else{
            if(arr[front] > arr[end]){
                sumD += arr[front]; front++;
            }
            else{
                sumD += arr[end]; end--;
            }
            flag = 0;
        }
    }
    cout << sumS << " " <<sumD <<endl;
    return 0;
}