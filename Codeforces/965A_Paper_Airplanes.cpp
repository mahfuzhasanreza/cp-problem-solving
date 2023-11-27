#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, n, s, p;
    cin>>k>>n>>s>>p;

    int r1, r2;
    r1 = n/s;
    if(n%s != 0 || n<s){
        r1++;
    }
    r2 = (k*r1)/p;
    if((k*r1)%p != 0){
        r2++;
    }
    cout<<r2<<endl;

    return 0;
}