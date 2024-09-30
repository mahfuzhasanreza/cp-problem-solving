#include<bits/stdc++.h>
using namespace std;

int main(){
   int t; cin>>t;
   
   while(t--){
       int n; cin>>n;
       int arr[n+1];
       
       int oneIndex, twoIndex, maxIndex;
       int cmpMax=INT_MIN;
       
       for(int i=1; i<=n; i++){
           cin>>arr[i];
           
           if(arr[i]==1) oneIndex=i;
           else if(arr[i]==2) twoIndex=i;
           if(cmpMax<arr[i]){
               cmpMax=arr[i];
               maxIndex=i;
           }
       }
       
       if(oneIndex>twoIndex) swap(oneIndex, twoIndex);
       
       if(oneIndex<maxIndex && twoIndex>maxIndex) cout<<oneIndex<<" "<<twoIndex<<endl;
       else if(oneIndex>maxIndex) cout<<oneIndex<<" "<<maxIndex<<endl;
       else cout<<twoIndex<<" "<<maxIndex<<endl;
   }
   
   return 0;
}