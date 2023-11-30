#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    int upperCount=0, lowerCount=0;

    for(int i=0; i<str.size(); i++){
        if(isupper(str[i])){
            upperCount++;
        } else{
            lowerCount++;
        }
    }

    if(lowerCount>upperCount || lowerCount==upperCount){
        for(int i=0; i<str.size(); i++){
            char ch=tolower(str[i]);
            cout<<ch;
        }
    } else{
        for(int i=0; i<str.size(); i++){
            char ch=toupper(str[i]);
            cout<<ch;
        }
    }
    cout<<endl;

    return 0;
}