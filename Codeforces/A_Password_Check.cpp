#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin>>st;

    if(st.size()<5){
      cout<<"Too weak"<<endl;
      return 0;
    }
    bool isLarge=false, isSmall=false, isDigit=false;
    
    for(int i=0; i<st.size(); i++){
      if(st[i]>='A' and st[i]<='Z') isLarge=true;
      if(st[i]>='a' and st[i]<='z') isSmall=true;
      if(st[i]>='0' and st[i]<='9') isDigit=true;

      if(isLarge and isSmall and isDigit){
        cout<<"Correct"<<endl;
        return 0;
      }
    }
    cout<<"Too weak"<<endl;

    return 0;
}