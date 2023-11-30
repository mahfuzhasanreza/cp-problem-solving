#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    string st;

    cin>>n>>t>>st;

    string newSt=st;
    for(int i=0; i<t; i++){
        for(int j=0; j<n; j++){
            if(st[j]=='B' && st[j+1]=='G'){
                swap(newSt[j], newSt[j+1]);
            }
        }
        st=newSt;
    }

    cout<<newSt<<endl;

    return 0;
}