#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }

    int c=0;
    for(int i=1; i<4; i++){
        for(int j=i-1; j>=0; j--){
            if(arr[j]==arr[i]){
                c++;
                break;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}