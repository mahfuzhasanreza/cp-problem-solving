#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;

    while(t--){
        int l, r; cin>>l>>r;
        if(r<=3){
            cout<<-1<<endl;
            continue;
        }
        if(l<r){
            if(r%2==0){
                cout<<2<<" "<<r-2<<endl;
            } else{
                r--;
                cout<<2<<" "<<r-2<<endl;
            }
        } else{
            if(r%2==0){
                cout<<2<<" "<<r-2<<endl;
            } else{
                int primeNum=-1;
                for(int i=2; i<=sqrt(r); i++){
                    if(r%i==0){
                        primeNum=i;
                        break;
                    }
                }
                if(primeNum==-1) cout<<-1<<endl;
                else cout<<primeNum<<" "<<l-primeNum<<endl;
            }
        }
    }

    return 0;
}