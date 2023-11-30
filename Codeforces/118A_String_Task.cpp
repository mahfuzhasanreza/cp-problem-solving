#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cin>>st;

    for(int i=0; i<st.length(); i++){
        if(st[i]!='A' && st[i]!='E' && st[i]!='I' && st[i]!='O' && st[i]!='U' && st[i]!='a' && st[i]!='e' && st[i]!='i' && st[i]!='o' && st[i]!='u' && st[i]!='Y' && st[i]!='y'){
            cout<<".";
            if(st[i]>='A' && st[i]<='Z'){
                st[i]+=32;
            }
            cout<<st[i];
        }
    }

    return 0;
}