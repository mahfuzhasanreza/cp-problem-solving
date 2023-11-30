#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    int st[t][3];
    for(int i=0; i<t; i++){
        for(int j=0; j<3; j++){
            cin>>st[i][j];
        }
    }

    int res=0;
    for(int i=0; i<t; i++){
        if(st[i][0]+st[i][1]+st[i][2]>=2){
            res++;
        }
    }
    cout<<res<<endl;

    return 0;
}