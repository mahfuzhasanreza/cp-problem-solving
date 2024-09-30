#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        string st;
        cin>>st;

        if(st.size()==2){
            if(st[1]-'0' > st[0]-'0'){
                cout<<st[0]<<" "<<st[1]<<endl;
            } else{
                cout<<-1<<endl;
            }
        } else{
            string tmp="";
            tmp.push_back(st[0]);
            string tmp2="";
            int cnt=1;
            for(int i=1; i<st.size(); i++){
                if(st[i]=='0' && cnt){
                    tmp.push_back(st[i]);
                } else{
                    cnt=0;
                    tmp2.push_back(st[i]);
                }
            }

            if(tmp2==""){
                cout<<-1<<endl;
                continue;
            }

            int a=stoi(tmp), b=stoi(tmp2);
            if(a<b) cout<<tmp<<" "<<tmp2<<endl;
            else cout<<-1<<endl;
        }

    }

    return 0;
}