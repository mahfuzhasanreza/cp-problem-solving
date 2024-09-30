#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        unsigned ll n, k, l, h, m;
        cin>>k;

        l=k;
        h=1e19;
        while(l<=h){
            m=l+(h-l)/2;
            
            unsigned ll root=(unsigned ll)floor(sqrt(m));
            while(root*root>m) root--;

            unsigned ll on = m-root;
            if(on==k){
                n=m;
                h=m-1;
            } else if(on>k){
                h=m-1;
            } else{
                l=m+1;
            }
        }
        cout<<n<<endl;
    }

    return 0;
}