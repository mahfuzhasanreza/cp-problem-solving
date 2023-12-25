#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        if(n%7==0){
            cout<<n<<endl;
        } else{
            int x=n%7;
            if((7-x)+(n%10)<10){
                cout<<n+(7-x)<<endl;
            } else{
                cout<<n-x<<endl;
            }
        }
    }

    return 0;
}