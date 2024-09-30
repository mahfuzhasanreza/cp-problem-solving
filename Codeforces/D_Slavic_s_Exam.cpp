#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main(){
    int t; cin>>t;

    while(t--){
        string s1,s2;
        cin>>s1>>s2;

        int c=0;
        bool y=false;
        string s3;
        int i=0;
        for(; i<s1.size(); i++){
            if(s2.size()==c){
                y=true;
                break;
            }
            if(s1[i]==s2[c] || s1[i]=='?'){
                s3.push_back(s2[c]); 
                c++;
            } else{
                s3.push_back(s1[i]);
            }
        }
        for(;i<s1.size();i++){
            if(s1[i]=='?') 
                s3.push_back('a'); 
            else s3.push_back(s1[i]);
        }
        if(s2.size()==c){
                y=true;
        }

        if(y){
            cout<<"YES"<<endl<<s3<<endl;

        } else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}