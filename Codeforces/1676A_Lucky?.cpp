#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int a;
        cin>>a;

        int c=0;
        int s1=0, s2=0;
        while(a>0){
            c++;
            if(c<=3){
                s1+=a%10;
            } else{
                s2+=a%10;
            }
            a/=10;
        }

        if(s1==s2){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}