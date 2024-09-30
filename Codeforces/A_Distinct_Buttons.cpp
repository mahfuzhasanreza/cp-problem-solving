#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int arr2[n];

        int count=0;
        int c1=0, c2=0, c3=0, c4=0;
        for(int i=0; i<n; i++){
            cin>>arr[i]>>arr2[i];
            
            if(arr[i]>0 && c1==0){
                c1=1;
                count++;
            }
            if(arr[i]<0 && c2==0){
                c2=1;
                count++;
            }

            if(arr2[i]>0 && c3==0){
                c3=1;
                count++;
            }
            if(arr2[i]<0 && c4==0){
                c4=1;
                count++;
            }
        }
        if(count<4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}