#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
        cout<<"YES"<<endl;
        return 0;
    }
    
    while(n>0){
        if(n>47 && n%10!=4){
            if(n%10!=7){
                cout<<"NO"<<endl;
                return 0;
            }
        } else if(n<7){
            if(n!=4){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        n /= 10;
    }

    cout<<"YES"<<endl;

    return 0;
}