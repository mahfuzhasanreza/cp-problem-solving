#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        string tmp=st;

        sort(tmp.begin(), tmp.end());
        if(tmp==st){
            cout<<0<<endl;
            continue;
        }

        vector<int> lex_index;
        for(int i=0; i<n; i++){
            while(!lex_index.empty() && st[i]>st[lex_index.back()]){
                lex_index.pop_back();
            }
            lex_index.push_back(i);
        }

        int dup=1;
        for(int i=1; i<lex_index.size(); i++){
            if(st[lex_index[i]]==st[lex_index[0]]){
                dup++;
            }
        }

        for(int i=0; i<lex_index.size()/2; i++){
            swap(st[lex_index[i]], st[lex_index[lex_index.size()-1-i]]);
        }
        
        if(is_sorted(st.begin(), st.end())){
            cout<<lex_index.size()-dup<<endl;
        } else{
            cout<<-1<<endl;
        }
    }

    return 0;
}