#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      long long int arr1[n], arr2[n];
      long long sum1=0;
      for(int i=0; i<n; i++){
        cin>>arr1[i];
        sum1+=arr1[i];
      }
      long long sum2=0;
      for(int i=0; i<n; i++){
        cin>>arr2[i];
        sum2+=arr2[i];
      }
      sort(arr1, arr1+n);
      sort(arr2, arr2+n);
      sum1-=arr1[0];
      sum2-=arr2[0];
      
      long long sum=arr1[0]+arr2[0];
      if(n==1){
        cout<<sum<<endl;
        continue;
      }
      
      if(arr1[0]*(n-1)+sum2 < arr2[0]*(n-1)+sum1){
        sum+=arr1[0]*(n-1)+sum2;
      } else{
        sum+=arr2[0]*(n-1)+sum1;
      }
      cout<<sum<<endl;
    } 
   
    return 0;
}