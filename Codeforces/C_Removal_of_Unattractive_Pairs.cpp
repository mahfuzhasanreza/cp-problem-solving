#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin>>t;

    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;

        map<char, int> freq;
        int mxFreq=0;
        for(int i=0; i<n; i++){
            freq[st[i]]++;
            mxFreq=max(mxFreq, freq[st[i]]);
        }
        if(mxFreq>n/2){
            cout<<mxFreq-(n-mxFreq)<<endl;
        } else{
            if(n%2==0) cout<<0<<endl;
            else cout<<1<<endl;
        }
    }

    return 0;
}