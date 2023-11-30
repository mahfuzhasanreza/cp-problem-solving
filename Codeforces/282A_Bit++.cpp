#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, X=0;
   cin>>n;
   
   for(int i=0; i<n; i++){
       string str;
       cin>>str;
       if(str=="X++") X++;
       else if(str=="++X") ++X;
       else if(str=="X--") X--;
       else if(str=="--X") --X;
   }
   
   cout<<X<<endl;
   
   return 0;
}