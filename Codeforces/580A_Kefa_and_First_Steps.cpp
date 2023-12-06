#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int c;
    int count=0;
    int maxCount=0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(i==0){
            c=a;
            count++;
            maxCount++;
        } else if(a>=c){
            c=a;
            count++;
            if(maxCount<count){
                maxCount=count;
            }
        } else{
            c=a;
            count=1;
        }
    }
    cout<<maxCount<<endl;

    return 0;
}