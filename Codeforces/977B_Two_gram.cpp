#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string st;
    cin>>st;

    string res;
    int maxSum=INT_MIN;
    for(int i=0; i<n-1; i++){
        int c=0;
        string temp;
        temp.push_back(st[i]);
        temp.push_back(st[i+1]);
        for(int j=0; j<n-1; j++){
            string temp2;
            temp2.push_back(st[j]);
            temp2.push_back(st[j+1]);
            if(temp==temp2){
                c++;
            }
        }
        if(maxSum<c){
            maxSum=c;
            res=temp;
        }
    }
    cout<<res<<endl;
    
    return 0;
}