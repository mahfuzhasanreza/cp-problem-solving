#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<=n; i++) cin>>arr[i];

        if(arr[1]==arr[n]){
            int i=2, j=n-1;
            for(int k=2; k<=n; k++){
                if(arr[k]==arr[k-1]) i++;
                else break;
            }
            for(int k=n-1; k>=1; k--){
                if(arr[k]==arr[k+1]) j--;
                else break;
            }
            if(i>j){
                cout<<0<<endl;
                continue;
            }
            cout<<j-i+1<<endl;
        } else{
            int leftCount=1, rightCount=1;
            for(int i=2; i<=n; i++){
                if(arr[i]==arr[i-1]) leftCount++;
                else break;
            }
            for(int i=n-1; i>=1; i--){
                if(arr[i]==arr[i+1]) rightCount++;
                else break;
            }
            cout<<n-max(leftCount, rightCount)<<endl;
        }
    }

    return 0;
}