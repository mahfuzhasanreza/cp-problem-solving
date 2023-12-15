#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c1=0, c2=0, c3=0, c4=0, t=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==1){
            c1++;
        } else if(arr[i]==2){
            c2++;
        } else if(arr[i]==3){
            c3++;
        } else if(arr[i]==4){
            c4++;
        }
    }
    t=c4;
    
    while(c3!=0 && c1!=0){
        c3-=1;
        c1-=1;
        t++;
    }
    if(c3!=0 && c1==0){
        t+=c3;
        c3=0;
    }

    t+=(c2/2);
    if(c2%2!=0){
        c1-=2;
        t++;
    }

    if(c1>0){
        t+=(c1/4);
        if(c1%4!=0){
            t++;
        }
    }
    
    cout<<t<<endl;
    
    return 0;
}