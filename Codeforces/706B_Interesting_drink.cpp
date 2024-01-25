#include<bits/stdc++.h>
using namespace std;

int bSearch(int coin, int shop[], int n){
    int l=0, r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(shop[mid]>coin){
            r=mid-1;
        } else{
            l=mid+1;
        }
        if(shop[mid]<=coin && shop[mid+1]>coin){
            return mid;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int shop[n];
    for(int i=0; i<n; i++){
        cin>>shop[i];
    }
    int q;
    cin>>q;
    int coin[q];
    for(int i=0; i<q; i++){
        cin>>coin[i];
    }

    sort(shop, shop+n);

    for(int i=0; i<q; i++){
        if(coin[i]<shop[0]){
            cout<<0<<endl;
            continue;
        }
        if(coin[i]>=shop[n-1]){
            cout<<n<<endl;
            continue;
        }
        int index=bSearch(coin[i], shop, n);
        for(int j=index+1; j<n; j++){
            if(shop[j]>coin[i]){
                index=j;
                break;
            }
        }
        cout<<index<<endl;
    }

    return 0;
}