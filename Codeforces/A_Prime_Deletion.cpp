#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    bool isP=true;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            isP=false;
            break;
        }
    }
    return isP;
}

int main(){
    int t; cin>>t;

    while(t--){
        string st;
        cin>>st;
        bool isYes=false;
        for(int i=0; i<st.length()-1; i++){
            for(int j=i+1; j<st.length(); j++){
                string s;
                s.push_back(st[i]);
                s.push_back(st[j]);
                if(isPrime(stoi(s))){
                    isYes=true;
                    cout<<s<<endl;
                    break;
                }
            }
            if(isYes) break;
        }
        if(!isPrime) cout<<-1<<endl;
    }

    return 0;
}