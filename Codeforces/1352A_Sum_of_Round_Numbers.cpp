#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int prevN=n;
		int c=0;
		while(n>0){
			if(n%10==0){
				n/=10;
				continue;
			}
			c++;
			n/=10;
		} cout<<c<<endl;

		c=-1;
		while(prevN>0){
			c++;
			if(prevN%10==0){
				prevN/=10;
				continue;
			}
			cout<<prevN%10;
			for(int i=0; i<c; i++){
				cout<<0;
			} cout<<" ";
			prevN/=10;
		} cout<<endl;
	}

	return 0;
}