#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        string st1, st2;
        cin>>st1>>st2;
        bool isYes=false;

        for(int i=0; i<st1.length()-1; i++){
            if(st1[i]=='0' && st1[i+1]=='1' && st2[i]=='0' && st2[i+1]=='1'){
                isYes=true;
                break;
            }
        }
        if(isYes){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }

    return 0;
}