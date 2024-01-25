#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		string str1, str2, str3;
		cin>>str1>>str2>>str3;

		if(str1[0]!='.' && str1[0]==str1[1] && str1[1]==str1[2]){
			cout<<str1[0]<<endl;
			continue;
		}
		if(str2[0]!='.' && str2[0]==str2[1] && str2[1]==str2[2]){
			cout<<str2[0]<<endl;
			continue;
		}
		if(str3[0]!='.' && str3[0]==str3[1] && str3[1]==str3[2]){
			cout<<str3[0]<<endl;
			continue;
		}
		if(str1[0]!='.' && str1[0]==str2[0] && str2[0]==str3[0]){
			cout<<str1[0]<<endl;
			continue;
		}
		if(str1[1]!='.' && str1[1]==str2[1] && str2[1]==str3[1]){
			cout<<str1[1]<<endl;
			continue;
		}
		if(str1[2]!='.' && str1[2]==str2[2] && str2[2]==str3[2]){
			cout<<str1[2]<<endl;
			continue;
		}
		if(str1[0]!='.' && str1[0]==str2[1] && str2[1]==str3[2]){
			cout<<str1[0]<<endl;
			continue;
		}
		if(str1[2]!='.' && str1[2]==str2[1] && str2[1]==str3[0]){
			cout<<str1[2]<<endl;
			continue;
		}
		cout<<"DRAW"<<endl;
	}

	return 0;
}