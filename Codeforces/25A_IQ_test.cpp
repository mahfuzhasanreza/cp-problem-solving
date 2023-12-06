#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool isEven=false;
    int c=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            c++;
        }
        if(c==2){
            isEven=true;
            break;
        }
    }

    if(isEven){
        for(int i=0; i<n; i++){
            if(arr[i]%2!=0){
                cout<<i+1<<endl;
            }
        }
    } else{
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                cout<<i+1<<endl;
            }
        }
    }

    return 0;
}