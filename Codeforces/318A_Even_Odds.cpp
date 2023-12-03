#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k;
    cin>>n>>k;

    if(2*k-1<=n){
        cout<<2*k-1<<endl;
    } else{
        long long int pos;
        if(n%2==0){
            n-=1;
            pos=(n+1)/2;
        } else{
            pos=(n+1)/2;
        }
        k-=pos;
        cout<<2*k<<endl;
    }

    return 0;
}