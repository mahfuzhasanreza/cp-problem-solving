#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin>>n>>m;

  int prefSum[n+1], arr[n];
  prefSum[0]=0;

  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(i==0) prefSum[i+1]=arr[i];
    else prefSum[i+1]=prefSum[i]+arr[i];
  }

  int cmp=INT_MAX;
  int index=-1;
  for(int i=m; i<=n; i++){
    int sum=prefSum[i]-prefSum[i-m];
    if(cmp>sum){
      cmp=sum;
      index=i-m+1;
    }
  }
  cout<<index<<endl;

  return 0;
}