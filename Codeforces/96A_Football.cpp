#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin>>st;

    int count=1;
    for(int i=1; i<st.length(); i++){
        if(st[i]==st[i-1]){
            count++;
        } else{
            if(count>=7){
                cout<<"YES"<<endl;
                return 0;
            } else{
                count=1;
            }
        }
    }

    if(count>=7){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }

    return 0;
}