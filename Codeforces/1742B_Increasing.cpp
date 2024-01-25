#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> vct(n);
        for(int i=0; i<n; i++){
            cin>>vct[i];
        }

        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        sort(vct.begin(), vct.end());
        int i;
        for(i=0; i<n-1; i++){
            if(vct[i]==vct[i+1]){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==n-1){
            cout<<"YES"<<endl;
        }
    }

    return 0;
}