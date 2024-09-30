#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, m;
    cin>>n>>m;
    
    int k=-1;
    for(int i=n+1; i<=50; i++){
        if(isPrime(i)){
            k=i;
            break;
        }
    }
    if(k!=m) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}