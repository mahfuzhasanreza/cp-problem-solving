#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z;
    cin>>x>>y>>z;

    int m=max(x, max(y, z));
    int n=min(x, min(y, z));
    int o;
    if(x!=m && x!=n){
        o=x;
    } else if(y!=m && y!=n){
        o=y;
    } else{
        o=z;
    }

    int c=m-o;
    if(c<0){
        c*=(-1);
    }
    int c2=n-o;
    if(c2<0){
        c2*=(-1);
    }

    cout<<c+c2<<endl;

    return 0;
}