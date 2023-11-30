#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    int maxCount=b[0];

    for(int i=1; i<n-1; i++){
        if(b[i-1]-a[i]+b[i]>maxCount){
            maxCount=b[i-1]-a[i]+b[i];
        }
        b[i]=b[i-1]-a[i]+b[i];
    }
    
    cout<<maxCount<<endl;

    return 0;
}