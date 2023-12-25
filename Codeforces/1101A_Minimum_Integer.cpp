#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int l, r, d;
        cin>>l>>r>>d;

        if(d<l){
            cout<<d<<endl;
            continue;
        } else if(d>r){
            cout<<d<<endl;
            continue;
        }
        int prevD=d;
        if((d*=(r/d))>r){
            cout<<d<<endl;
        } else{
            cout<<prevD+d<<endl;
        }
    }

    return 0;
}