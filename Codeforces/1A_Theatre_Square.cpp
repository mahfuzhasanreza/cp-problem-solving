#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, m, a;
    cin>>n>>m>>a;

    long long int r=0;
    while(m>0){
        r++;
        m-=a;
    }

    long long int k=n-a;
    long long int kr=0;
    while(k>0){
        kr++;
        k-=a;
    }

    cout<<r+(kr*r)<<endl;

    return 0;
}