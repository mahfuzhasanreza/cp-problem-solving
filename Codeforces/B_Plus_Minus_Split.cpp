#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n; cin>>n;
        string st;
        cin>>st;

        sort(st.begin(), st.end());

        //cout<<st<<endl;
        int plus=0, min=0;
        for(int i=0; i<n; i++){
            if(st[i]=='+') plus++;
            else min++;
        }
        cout<<abs(plus-min)<<endl;
    }

    return 0;
}