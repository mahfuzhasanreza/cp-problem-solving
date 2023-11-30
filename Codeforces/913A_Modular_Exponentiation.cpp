#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    
    int num=1;
    for(int i=0; i<n; i++){
        num*=2;
        if(num>m){
            cout<<m<<endl;
            return 0;
        }
    }
    cout<<m%num<<endl;

    return 0;
}