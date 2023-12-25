#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int a, b;
        cin>>a>>b;

        int diff=(b-a);
        if(diff<0){
            diff*=(-1);
        }

        if(a==b){
            cout<<0<<endl;
            continue;
        }

        if(a<b){
            cout<<b-a<<endl;
            continue;
        } else{
            int i=0;
            DO:
            int mid=(a+b)/2;
            if((mid-a)==(b-mid)){
                cout<<i<<endl;
                continue;
            } else{
                i++;
                a+=1;
                goto DO;
            }

        }
    }

    return 0;
}