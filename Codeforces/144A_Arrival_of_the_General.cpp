#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	int arr[t];
	for(int i=0; i<t; i++){
		cin>>arr[i];
	}

	int max=INT_MIN, min=INT_MAX;
	int maxIndex, minIndex;
	for(int i=t-1; i>=0; i--){
		if(max<=arr[i]){
			maxIndex=i;
			max=arr[i];
		}
	}
	for(int i=0; i<t; i++){
		if(min>=arr[i]){
			minIndex=i;
			min=arr[i];
		}
	}

	int time=maxIndex+(t-minIndex-1);
	if(maxIndex>minIndex){
		time--;
	}
	cout<<time<<endl;

	return 0;
}