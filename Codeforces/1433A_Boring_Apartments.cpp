#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		string st;
		cin>>st;

		int d=(stoi(st))%10;
		long long res=10*(d-1);

		if(st.length()==1){
			res+=1;
		} else if(st.length()==2){
			res+=3;
		} else if(st.length()==3){
			res+=6;
		} else{
			res+=10;
		}
		cout<<res<<endl;
		res=0;
	}

	return 0;
}