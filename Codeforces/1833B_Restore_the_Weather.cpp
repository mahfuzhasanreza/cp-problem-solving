#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<pair<int, int>> vct(n);
        for(int i=0; i<n; i++){
            cin>>vct[i].first;
            vct[i].second=i;
        }
        sort(vct.begin(), vct.end());
        vector<int> res(n);
        for(int i=0; i<n; i++){
            cin>>res[i];
        }
        sort(res.begin(), res.end());

        int ans[n];
        for(int i=0; i<n; i++){
            ans[vct[i].second]=res[i];
        }

        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        } cout<<endl;
    }

    return 0;
}