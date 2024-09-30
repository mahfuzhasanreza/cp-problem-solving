#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string st;
        cin>>st;
        string s;
        s.push_back(st[0]);
        s.push_back(st[1]);
        for(int i=2; i<n; i++){
            if(st[i+1]=='a' || st[i+1]=='e'){
                s.push_back('.');
                s.push_back(st[i]);
                s.push_back(st[++i]);
            } else{
                s.push_back(st[i]);
                //if(i!=n-1)
                //s.push_back('.');
            }
        }
        cout<<s<<endl;
    }

    return 0;
}