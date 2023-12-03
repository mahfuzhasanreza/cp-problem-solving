#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int count=1;
    int com=a[0];
    for(int i=1; i<n; i++){
        if(com==a[i]){
            continue;
        } else{
            com=a[i];
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}