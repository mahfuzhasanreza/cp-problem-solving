#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	long long c=0;
	while(t--){
		string st;
		cin>>st;

		if(st=="Tetrahedron"){
			c+=4;
		} else if(st=="Cube"){
			c+=6;
		} else if(st=="Octahedron"){
			c+=8;
		} else if(st=="Dodecahedron"){
			c+=12;
		} else if(st=="Icosahedron"){
			c+=20;
		}
	} cout<<c<<endl;

	return 0;
}