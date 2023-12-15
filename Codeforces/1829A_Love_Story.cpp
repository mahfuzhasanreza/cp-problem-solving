#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        string st;
        cin>>st;

        int c=0;
        string st2="codeforces";
        for(int j=0; j<10; j++){
            if(st[j]!=st2[j]){
                c++;
            }
        } cout<<c<<endl;
    }

    return 0;
}