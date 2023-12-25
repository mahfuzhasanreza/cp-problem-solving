#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	int arr[t];

	for(int i=0; i<t; i++){
		cin>>arr[i];
	}

	int c=1, maxCount=1;
	for(int i=1; i<t; i++){
		if(arr[i-1]<arr[i]){
			c++;
			if(c>maxCount){
				maxCount=c;
			}
		} else{
			if(c>maxCount){
				maxCount=c;
			}
			c=1;
		}
	} cout<<maxCount<<endl;

	return 0;
}