#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int count1=0, count2=0, count3=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='+'){
            continue;
        } else if(str[i]=='1'){
            count1++;
        } else if(str[i]=='2'){
            count2++;
        } else if(str[i]=='3'){
            count3++;
        }
    }

    int j=0;
    for(int i=0; i<count1; i++){
        cout<<"1";
        j++;
        if(j<str.length()){
            cout<<"+";
            j++;
        }
    }

    for(int i=0; i<count2; i++){
        cout<<"2";
        j++;
        if(j<str.length()){
            cout<<"+";
            j++;
        }
    }

    for(int i=0; i<count3; i++){
        cout<<"3";
        j++;
        if(j<str.length()){
            cout<<"+";
            j++;
        }
    }

    return 0;
}