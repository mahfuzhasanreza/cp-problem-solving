#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        set<int> val;
        for(int i=3; i<=n; i++){
            val.insert(i);
        }
        int arr[n];
        arr[0]=1;
        arr[1]=2;
        for(int i=2; i<n; i++){
            if(arr[i-1]*2<=n){
                arr[i]=arr[i-1]*2;
                val.erase(arr[i-1]*2);
            } else{
                auto it=val.begin();
                arr[i]=(*it);
                val.erase(it);
            }
        }
        for(int i=0; i<n; i++) cout<<arr[i]<<" ";
        cout<<endl;
    }

    return 0;
}