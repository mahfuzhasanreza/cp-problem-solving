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

        int k=0;
        for(int i=0; i<n; i++){
            if(arr[i]<i){
                break;
            }
            k=i;
        }
        int c=1;
        for(int i=n-1; i>=k; i--){
            if(arr[i]<(n-1-i)){
                c=0;
                break;
            }
        }
        if(c){
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<"No"<<endl;
    }

    return 0;
}