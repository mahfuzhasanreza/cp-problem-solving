#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n, m;
        cin>>n>>m;

        if(n%m!=0){
            cout<<1<<endl<<n<<endl;
            continue;
        } else{
            cout<<2<<endl<<n-1<<" "<<1<<endl;
        }
    }

    return 0;
}