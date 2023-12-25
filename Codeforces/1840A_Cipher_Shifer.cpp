#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        char ch=st[0];
        cout<<ch;
        for(int i=1; i<n; i++){
            if(ch==st[i]){
                if(i+1<n){
                    ch=st[i+1];
                    cout<<ch;
                }
                i++;
            }
        } cout<<endl;
    }

    return 0;
}