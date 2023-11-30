#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string st;
    cin>>n>>st;

    int count=0;
    for(int i=1; i<n; i++){
        if(st[i-1]==st[i]){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}