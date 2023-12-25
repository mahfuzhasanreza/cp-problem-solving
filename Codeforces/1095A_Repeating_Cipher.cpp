#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	string st;
	cin>>st;

	for(int i=0, k=0; i<t; i+=k){
		cout<<st[i];
		k++;
	} cout<<endl;

	return 0;
}