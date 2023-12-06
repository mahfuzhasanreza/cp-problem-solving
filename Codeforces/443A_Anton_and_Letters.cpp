#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    getline(cin, st);
    sort(st.begin(), st.end());
    
    int c=0;
    for(int i=0; i<st.length(); i++){
        if(st[i]=='{' || st[i]=='}' || st[i]==' ' || st[i]==','){
            continue;
        } else{
            if(st[i]!=st[i+1]){
                c++;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}