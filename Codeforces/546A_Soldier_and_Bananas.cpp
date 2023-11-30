#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin>>k>>n>>w;

    if(w==1){
        if(k-n<0){
            cout<<0<<endl;
        } else{
            cout<<k-n<<endl;
        }
        return 0;
    }

    long int res=k;
    for(int i=2, j; i<=w; i++){
        res=res+(k*i);
    }
    if(res-n<0){
        cout<<0<<endl;
    } else{
        cout<<res-n<<endl;
    }

    return 0;
}