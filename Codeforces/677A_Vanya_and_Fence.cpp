#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h;
    cin>>n>>h;

    int w[n];
    for(int i=0; i<n; i++){
        cin>>w[i];
    }

    int sum=0;

    for(int i=0; i<n; i++){
        if(w[i]<=h){
            sum+=1;
        } else{
            sum+=2;
        }
    }

    cout<<sum<<endl;

    return 0;
}