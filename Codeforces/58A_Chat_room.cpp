#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin>>st;

    int i=0;
    for(; i<st.length(); i++){
        if(st[i]=='h'){
            i++;
            break;
        }
        if(i==st.length()-1){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(; i<st.length(); i++){
        if(st[i]=='e'){
            i++;
            break;
        }
        if(i==st.length()-1){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(; i<st.length(); i++){
        if(st[i]=='l'){
            i++;
            break;
        }
        if(i==st.length()-1){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(; i<st.length(); i++){
        if(st[i]=='l'){
            i++;
            break;
        }
        if(i==st.length()-1){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(; i<st.length(); i++){
        if(st[i]=='o'){
            i=INT_MAX;
            break;
        }
        if(i==st.length()-1){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    if(i!=INT_MAX){
        cout<<"NO"<<endl;
    } else{
        cout<<"YES"<<endl;
    }

    return 0;
}