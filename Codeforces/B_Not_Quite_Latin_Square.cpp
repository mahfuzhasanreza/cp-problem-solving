#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        char l1[3], l2[3], l3[3];
        int c=0, c2=0;
        for(int i=0; i<3; i++){
            cin>>l1[i];
            if(l1[i]=='?'){
                c=1;
            }
        }
        for(int i=0; i<3; i++){
            cin>>l2[i];
            if(l2[i]=='?'){
                c=2;
            }
        }
        for(int i=0; i<3; i++){
            cin>>l3[i];
            if(l3[i]=='?'){
                c=3;
            }
        }

        bool a=false, b=false, cc=false;
        if(c==1){
            for(int i=0; i<3; i++){
            if(l1[i]!='?'){
                if(l1[i]=='A') a=true;
                else if(l1[i]=='B') b=true;
                else if(l1[i]=='C') cc=true;
            }
        }
        }
        else if(c==2){
            for(int i=0; i<3; i++){
            if(l2[i]!='?'){
                if(l2[i]=='A') a=true;
                else if(l2[i]=='B') b=true;
                else if(l2[i]=='C') cc=true;
            }
        }
        }
        else if(c==3){
            for(int i=0; i<3; i++){
            if(l3[i]!='?'){
                if(l3[i]=='A') a=true;
                else if(l3[i]=='B') b=true;
                else if(l3[i]=='C') cc=true;
            }
        }
        }
        if(a==false) cout<<'A'<<endl;
        else if(b==false) cout<<'B'<<endl;
        else if(cc==false) cout<<'C'<<endl;
    }

    return 0;
}