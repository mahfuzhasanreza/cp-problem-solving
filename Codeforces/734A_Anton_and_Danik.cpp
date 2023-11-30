#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string st;
    cin>>n>>st;

    int a=0, d=0;
    for(int i=0; i<n; i++){
        if(st[i]=='A'){
            a++;
        } else{
            d++;
        }
    }

    if(a>d){
        cout<<"Anton"<<endl;
    } else if(d>a){
        cout<<"Danik"<<endl;
    } else{
        cout<<"Friendship"<<endl;
    }

    return 0;
}