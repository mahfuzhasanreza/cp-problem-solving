#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;

        set<string> s;
        for(int i=0; i<st.length()-1; i++){
            string temp;
            temp.push_back(st[i]);
            temp.push_back(st[i+1]);
            s.insert(temp);
        }
        cout<<s.size()<<endl;
    }

    return 0;
}