#include<bits/stdc++.h>
using namespace std;

int main(){
	string st;
	cin>>st;

	for(int i=0; i<st.length(); i++){
		int n=st[i]-'0';
		if(n>=5 && n<=9){
			if(i==0 && n==9){
				continue;
			}
			n=9-n;
			st[i]=n+'0';
		}
	}

	for(int i=0; i<st.length(); i++){
		cout<<st[i];
	} cout<<endl;

	return 0;
}