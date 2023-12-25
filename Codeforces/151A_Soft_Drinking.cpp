#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	long long mm=(k*l)/nl;
	long long kk=c*d;
	long long ll=p/np;
	cout<<(min(min(mm, kk), ll))/n<<endl;

	return 0;
}