#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int k; cin>>k;
        vector<int> vct1;
        vector<int> vct2;
        for(int i=0; i<k; i++){
            int n;
            cin>>n;
            int arr[n];
            for(int i=0; i<n; i++)
                cin>>arr[i];
            sort(arr, arr+n);
            vct1.push_back(arr[0]);
            vct2.push_back(arr[1]);
        }
        sort(vct1.begin(), vct1.end());
        sort(vct2.begin(), vct2.end());
        long long ans = vct1[0];
        for(int i=vct2.size()-1, j=1; j<k; i--, j++){
            ans+=vct2[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}