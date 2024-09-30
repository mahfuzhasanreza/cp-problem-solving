#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        ll sum=0, mxSum=INT_MIN;
        bool isEven;
        vector<ll> vct;

        for(int i=0; i<n; i++){
            if(i==0){
                if(abs(arr[i])%2==0) isEven=true;
                else isEven=false;
            } else{
                if(isEven){
                    if(abs(arr[i])%2==0){
                        vct.push_back(mxSum);
                        sum=0;
                        mxSum=INT_MIN;
                    } else{
                        isEven=false;
                    }
                } else{
                    if(abs(arr[i])%2!=0){
                        vct.push_back(mxSum);
                        sum=0;
                        mxSum=INT_MIN;
                    } else{
                        isEven=true;
                    }
                }
            }
            sum+=arr[i];
            if(sum<arr[i]) sum=arr[i];
            mxSum=max(sum, mxSum);
        }
        vct.push_back(mxSum);
        sort(vct.begin(), vct.end());
        
        cout<<vct[vct.size()-1]<<endl;
    }

    return 0;
}