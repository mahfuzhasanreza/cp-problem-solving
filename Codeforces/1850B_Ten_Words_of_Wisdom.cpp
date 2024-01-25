#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<pair<int, int>> p(n);
        
        for(int i=0; i<n; i++){
            cin>>p[i].first;
            cin>>p[i].second;
        }
        int ans, m=0;
        for(int i=0; i<n; i++){
            if(p[i].first<=10){
                if(p[i].second>m){
                    m=p[i].second;
                    ans=i;
                }
            }
        } cout<<ans+1<<endl;
    }



    return 0;
}