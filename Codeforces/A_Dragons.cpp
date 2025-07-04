#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, n; cin>>s>>n;

    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        cin>>b[i];
    }

    int c=0;
    int d=0;

    for(int i=0; i<n; i++){
     if(a[i]<s){
        d++;
        if(d==n){
            cout<<"YES"<<endl;
            return 0;
        }
        c=1;
        s+=b[i];
        a[i]=INT16_MAX;
     }
     
     if(c == 0 && i==n-1){
        cout<<"NO"<<endl;
        return 0;
     }

    if(c == 1 && i==n-1){
        c=0;
        i=-1;
     }
    }
    cout<<"YES"<<endl;

    return 0;
}