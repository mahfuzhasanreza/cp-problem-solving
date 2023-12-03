#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    double sum=0;
    for(int i=0; i<n; i++){
        sum+=(1.0/(100.0/a[i]));
    }

    cout<<fixed<<setprecision(12)<<sum/n*100<<endl;

    return 0;
}