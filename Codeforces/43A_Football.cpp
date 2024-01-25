#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t;
	cin>>t;
	
	string arr[t];
	for(int i=0; i<t; i++){
		cin>>arr[i];
	}

	if(t==1){
		cout<<arr[0]<<endl;
		return 0;
	}
	sort(arr, arr+t);

	vector<pair<string, int>> p(t);
	
	for(int i=0; i<t; i++){
		p[i].first=arr[i];
		p[i].second=1;
		
		int j=i;
		while(j!=t-1 && arr[j]==arr[j+1]){
			j++;
			p[i].second+=1;
		}
		i=j;
	}
	string ans;
	int m=INT_MIN;
	for(int i=0; i<p.size(); i++){
		if(m<p[i].second){
			m=p[i].second;
			ans=p[i].first;
		}
	}
	cout<<ans<<endl;

	return 0;
}