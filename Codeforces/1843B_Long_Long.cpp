#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        long long sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=abs(arr[i]);
        }
        int op=0;
        bool negative=false;
        for(int i=0; i<=n; i++){
            if(negative){
                if(i==n || arr[i]>0){
                    op++;
                    negative=false;
                }
            } else{
                if(arr[i]<0){
                    negative=true;
                }
            }
        }
        cout<<sum<<" "<<op<<endl;
    }

    return 0;
}