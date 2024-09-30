#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        int ans[n];
        for(int i=0; i<n; i++){
            int a=1073741823;
            for(int j=0; j<n; j++){
                if(i==j) continue;
                a&=arr[i][j];
            }
            ans[i]=a;
        }
        bool isYes=true;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if((ans[i]|ans[j])!=arr[i][j]){
                    isYes=false;
                    break;
                }
            }
        }
        if(isYes){
            cout<<"YES"<<endl;
            for(int i=0; i<n; i++) cout<<ans[i]<<" ";
            cout<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}