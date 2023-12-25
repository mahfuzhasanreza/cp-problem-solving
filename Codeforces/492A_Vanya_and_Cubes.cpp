#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int i=1, sum=0, c=0;
	while(1){
		if(sum>n){
			break;
		}
		sum+=i;
		if(sum<=n){
			c++;
		}
		n-=sum;
		i++;
	} cout<<c<<endl;

	return 0;
}