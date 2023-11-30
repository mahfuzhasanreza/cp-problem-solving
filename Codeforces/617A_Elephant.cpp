#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   
   if(n<=5){
       cout<<1<<endl;
       return 0;
   }
   
    int prod=1, count=0, test=0;
    while(test<n){
        test=prod*5;
        count++;
        prod++;
    }
    cout<<count<<endl;
   
   return 0;
}