#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int vt1[t], vt2[t], vt3[t];
    for(int i=0; i<t; i++){
        cin>>vt1[i]>>vt2[i]>>vt3[i];
    }

    int sum=0;
    for(int i=0; i<t; i++){
        sum+=vt1[i];
    }
    if(sum!=0){
        cout<<"NO"<<endl;
        return 0;
    }

    sum=0;
    for(int i=0; i<t; i++){
        sum+=vt2[i];
    }
    if(sum!=0){
        cout<<"NO"<<endl;
        return 0;
    }

    sum=0;
    for(int i=0; i<t; i++){
        sum+=vt3[i];
    }
    if(sum!=0){
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;

    return 0;
}