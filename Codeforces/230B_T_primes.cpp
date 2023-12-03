#include<bits/stdc++.h>
using namespace std;

int p[1000001];
void pr(){
    p[1000001]={0};
    for(long long int i=2; i*i<=1000000; i++){
        if(p[i]==0){
            for(long long int j=i*i; j<=1000000; j+=i){
                p[j]=1;
            }
        }
    }
}

int main(){

    pr();
    int n;
    cin>>n;

    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    
    for(int i=0; i<n; i++){
        long long int sq=sqrt(a[i]);
        if(a[i]==1 || a[i]==2){
            cout<<"NO"<<endl;
        } else if(sq*sq==a[i] && p[sq]==0){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}