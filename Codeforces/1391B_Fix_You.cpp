#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int m, n;
		cin>>m>>n;

		char ch[m][n];
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cin>>ch[i][j];
			}
		}
		int c=0;
		for(int i=0; i<n-1; i++){
			if(ch[m-1][i]!='R'){
				c++;
			}
		}
		for(int i=0; i<m-1; i++){
			if(ch[i][n-1]!='D'){
				c++;
			}
		}
		cout<<c<<endl;
	}

	return 0;
}