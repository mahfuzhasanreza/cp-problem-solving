#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count=0;
    count=n/100;
    n-=(100*count);

    int c=0;
    c=n/20;
    n-=(20*c);
    count+=c;

    c=0;
    c=n/10;
    n-=(10*c);
    count+=c;

    c=0;
    c=n/5;
    n-=(5*c);
    count+=c;

    c=0;
    c=n/1;
    n-=(1*c);
    count+=c;

    cout<<count<<endl;

    return 0;
}