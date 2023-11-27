#include<bits/stdc++.h>
using namespace std;

int main(){

    int w;
    cin>>w;
    
    for(int i=2; i<=w ; i+=2){
        if(w!=2 && (w-i)%2==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}