#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        k=min(30, k);
        k=pow(2, k);

        cout<<min(n+1, k)<<endl;
    }

    return 0;
}