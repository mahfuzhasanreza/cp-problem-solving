#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string st;
        cin>>st;

        if((st[0]=='y' || st[0]=='Y') && (st[1]=='E' || st[1]=='e') && (st[2]=='s' || st[2]=='S')){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}