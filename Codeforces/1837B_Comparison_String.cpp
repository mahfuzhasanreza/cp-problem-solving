#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        char arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int maxSamePair=1;
        char cmp=arr[0];
        int cmpCount=1;
        for(int i=1; i<n; i++){
            if(cmp==arr[i]){
                cmpCount++;
                continue;
            }
            if(cmpCount>maxSamePair){
                maxSamePair=cmpCount;
            }
            cmp=arr[i];
            cmpCount=1;
        }
        if(cmpCount>maxSamePair){
            maxSamePair=cmpCount;
        }
        cout<<maxSamePair+1<<endl;
    }

    return 0;
}