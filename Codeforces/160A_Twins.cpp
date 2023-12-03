#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int num[n];
    for(int i=0; i<n; i++){
        cin>>num[i];
    }

    int maxSum=0;
    int count=1;
    for(int i=1; i<n; i++){
        int sum=0;
        for(int j=0; j<n-i; j++){
            if(num[j]>num[j+1]){
                swap(num[j], num[j+1]);
            }
        }
        for(int k=0; k<n-i; k++){
            sum+=num[k];
        }
        maxSum+=num[n-i];

        if(maxSum>sum){
            cout<<count<<endl;
            return 0;
        }
        count++;
    }

    cout<<n<<endl; 

    return 0;
}