#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int a, b, n;
		cin>>a>>b>>n;

		int c=0;
		while(1){
			if(a>n || b>n){
				cout<<c<<endl;
				break;
			}
			c++;
			if(a<=b){
				a+=b;
			} else{
				b+=a;
			}
		}
	}

	return 0;
}