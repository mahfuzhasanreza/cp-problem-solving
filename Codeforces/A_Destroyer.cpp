#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin>>t;

    while(t--){
        int n;
        cin>>n; 
        int arr[n];
        int front[200]={0};
        for(int i=0; i<n; i++){
            cin>>arr[i];
            front[arr[i]]++;
        }
        bool isYes=true;
        int count=0;
        for(int i=1; i<200; i++){
            if(front[i]==0) continue;

            if(front[i-1]==0){
                isYes=false;
                break;
            }
            count++;
            front[i-1]--;
            if(count!=front[i]){
                i--;
            } else{
                count=0;
            }
        }
        if(isYes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}