#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n, k; cin>>n>>k;
		vector<int> vct(n);
		for(int i=0; i<n; i++){
			cin>>vct[i];
		}
		vector<int> power(n-1);
		for(int i=0; i<n-1; i++){
			power[i]=abs(vct[i]-vct[i+1]);
		}
		sort(power.begin(), power.end());
		long long sum=0;
		for(int i=0; i<n-k; i++){
			sum+=power[i];
		}
		cout<<sum<<endl;
	}

	return 0;
}