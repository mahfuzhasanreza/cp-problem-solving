#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
      int n;
      cin>>n;
      
      string st="NO";
      if(n<0){
        cout<<st<<endl;
        continue;
      }
      int x=n;
      if(n%2020==0) st="YES";
      else if(n%2021==0) st="YES";
      else{
        while(1){
          if(x<0) break;
          
          x-=2020;
          if(x>=0 && x%2021==0){
            st="YES";
            break;
          }
        }
        x=n;
        if(st!="YES"){
          while(1){
            if(x<0) break;
            
            x-=2021;
            if(x>=0 && x%2020==0){
              st="YES";
              break;
            }
          }
        }
      }
      cout<<st<<endl;
    }
    
    return 0;
}