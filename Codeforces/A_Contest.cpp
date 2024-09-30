#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    ll m= max((3*a)/10 , a - ((a/250)*c));
    ll n= max((3*b)/10 , b - ((b/250)*d));

    if(m==n) cout<<"Tie"<<endl;
    else if(m>n) cout<<"Misha"<<endl;
    else cout<<"Vasya"<<endl;

    return 0;
}