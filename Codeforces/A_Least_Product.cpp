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
        int c=0, c1=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<0) c++;
            if(arr[i]==0) c1=1;
        }

        if(c%2==0 && c1==0){
            cout<<1<<endl<<1<<" "<<0<<endl;
        } else{
            cout<<0<<endl;
        }
        
    }

    return 0;
}