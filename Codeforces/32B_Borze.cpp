#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
int main(){
    string st;
    cin>>st;
    string res;
    for(int i=0; i<st.size(); i++){
        if(st[i]=='.'){
            res.push_back('0');
        } else{
            i++;
            if(st[i]=='.') res.push_back('1');
            else res.push_back('2');
        }
    } cout<<res<<endl;

    return 0;
}