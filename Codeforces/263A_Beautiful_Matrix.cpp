#include<bits/stdc++.h>
using namespace std;

int main(){
    int m[5][5];

    int r, c;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>m[i][j];
            if(m[i][j]==1){
                r=i;
                c=j;
            }
        }
    }

    int r1=r-2;
    int r2=c-2;
    if(r1<0){
        r1=r1*-1;
    }
    if(r2<0){
        r2=r2*-1;
    }
    cout<<r1+r2<<endl;

    return 0;
}