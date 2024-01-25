#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);

        if(arr[0]%2!=0){
            cout<<"YES"<<endl;
            continue;
        }

        bool isOkay=true;
        for(int i=1; i<n; i++){
            if(arr[i]%2==0){
                continue;
            } else{
                cout<<"NO"<<endl;
                isOkay=false;
                break;
            }
        }
        if(isOkay){
            cout<<"YES"<<endl;
        }
    }

    return 0;
}