#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n+1]={0};

    int p;
    cin>>p;
    int n1[p];
    for(int i=0; i<p; i++){
        cin>>n1[i];
        a[n1[i]]=1;
    }

    int q;
    cin>>q;
    int n2[q];
    for(int i=0; i<q; i++){
        cin>>n2[i];
        a[n2[i]]=1;
    }

    for(int i=1; i<=n; i++){
        if(a[i]==0){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;

    return 0;
}