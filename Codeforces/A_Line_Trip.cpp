#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin>>n>>x;
        int arr[n+1]; arr[0]=0;
        for(int i=1; i<n+1; i++) cin>>arr[i];
        vector<int> diff;
        for(int i=1; i<n+1; i++){
            diff.push_back(arr[i]-arr[i-1]);
        }
        diff.push_back(2*(x-arr[n]));
        sort(diff.begin(), diff.end());
        cout<<diff[diff.size()-1]<<endl;

    }

    return 0;
}