#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> count(26);
        for(int i=0; i<n; i++){
            string st;
            cin>>st;
            for(int j=0; j<st.length(); j++){
                count[st[j]-'a']++;
            }
        }

        int i;
        for(i=0; i<count.size(); i++){
            if(count[i]%n!=0){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i==count.size()){
            cout<<"YES"<<endl;
        }
    }

    return 0;
}