#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num1[n], num2[n], num3[n];

    for(int i=0; i<n; i++){
        cin>>num1[i]>>num2[i]>>num3[i];
    }

    for(int i=0; i<n; i++){
        if(num1[i]>=num2[i] && num1[i]>=num3[i]){
            if(num1[i]==num2[i]+num3[i]){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        } else if(num2[i]>=num1[i] && num2[i]>=num3[i]){
            if(num2[i]==num1[i]+num3[i]){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        } else{
            if(num3[i]==num1[i]+num2[i]){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}