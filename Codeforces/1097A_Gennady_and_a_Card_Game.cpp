#include<bits/stdc++.h>
using namespace std;

int main(){
	string st;
	cin>>st;

	string s[5];
	for(int i=0; i<5; i++){
		cin>>s[i];
	}

	for(int i=0; i<5; i++){
		if(st[0]==s[i][0]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	for(int i=0; i<5; i++){
		if(st[1]==s[i][1]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;

	return 0;
}