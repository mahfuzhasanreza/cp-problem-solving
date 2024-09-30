#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int m, n;
        cin>>m>>n;

        int a[m], b[n];
    
        for(int i=0; i<m; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a, a+m);
        sort(b, b+n);

        ll sum=0;
        for(int i=0, j=m-1, k=0, l=n-1, c=0; c<m; c++){
            if(abs(a[i]-b[l])>=abs(a[j]-b[k])){
                sum+=abs(a[i]-b[l]);
                i++;
                l--;
            } else{
                sum+=abs(a[j]-b[k]);
                j--;
                k++;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}