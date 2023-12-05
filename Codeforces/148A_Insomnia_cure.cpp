#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, l, m, n, d;
    cin>>k>>l>>m>>n>>d;

    int a[d+1]={0};
    int c=1;
    for(int i=k*c; i<=d; i=k*c){
        a[i]=1;
        c++;
    }

    c=1;
    for(int i=l*c; i<=d; i=l*c){
        a[i]=1;
        c++;
    }

    c=1;
    for(int i=m*c; i<=d; i=m*c){
        a[i]=1;
        c++;
    }

    c=1;
    for(int i=n*c; i<=d; i=n*c){
        a[i]=1;
        c++;
    }

    c=0;
    for(int i=0; i<=d; i++){
        if(a[i]==0){
            c++;
        }
    }
    cout<<d-c+1<<endl;

    return 0;
}