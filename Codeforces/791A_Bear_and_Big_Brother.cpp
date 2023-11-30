#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;

    int i;
    for(i=0; a<=b; i++){
        a*=3;
        b*=2;
    }
    cout<<i<<endl;

    return 0;
}