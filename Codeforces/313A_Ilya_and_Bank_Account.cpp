#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n>=0){
        cout<<n<<endl;
    } else if(n/100==0){
        // cout<<"HI"<<endl;
        cout<<max(n/10, n%10)<<endl;
    } else{
        string st=to_string(n/100);
        st+=to_string(n%10*(-1));
        // cout<<st<<endl;
        cout<<max(n/10, stoi(st))<<endl;
    }

    return 0;
}