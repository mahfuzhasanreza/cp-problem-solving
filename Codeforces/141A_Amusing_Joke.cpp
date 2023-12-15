#include<bits/stdc++.h>
using namespace std;

int main(){
    string st1, st2, st;
    cin>>st1;
    cin>>st2;
    st1+=st2;
    cin>>st;

    if(st1.length()!=st.length()){
        cout<<"NO"<<endl;
        return 0;
    }

    sort(st1.begin(), st1.end());
    sort(st.begin(), st.end());

    if(st1==st){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }

    return 0;
}