#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string st;
    cin>>st;
    
    if(n<26){
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0; i<n; i++){
        st[i]=tolower(st[i]);
    }
    sort(st.begin(), st.end());

    int count=0;
    for(int i=0; i<n; i++){
        if(st[i]!=st[i+1]){
            count++;
        }
        if(count==26){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}