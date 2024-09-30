#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  while(t--){
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0, k=1; i<n; i++){
      for(int j=0; j<m; j++){
        arr[i][j]=k;
        k++;
      }
    }
    
    for(int i=1; i<n; i+=2){
      for(int j=0; j<m; j++){
        cout<<arr[i][j]<<" ";
      } cout<<endl;
    }

    for(int i=0; i<n; i+=2){
      for(int j=0; j<m; j++){
        cout<<arr[i][j]<<" ";
      } cout<<endl;
    } cout<<endl;
    
  }

  return 0;
}