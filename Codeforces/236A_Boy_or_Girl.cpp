#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int count=0;
    for(int i=0; i<str.length(); i++){
        int k=0;
        for(int j=0; j<i; j++){
            if(str[i]==str[j]){
                k=1;
                break;
            }
        }
        if(k==1){
            continue;
        }
        count++;
    }

    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    } else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}