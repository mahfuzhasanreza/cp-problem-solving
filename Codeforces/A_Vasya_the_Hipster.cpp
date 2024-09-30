#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int a, b; cin>>a>>b;

    int c=max(a,b)-min(a,b);
    cout<<min(a,b)<<" "<<c/2<<endl;

    return 0;
}