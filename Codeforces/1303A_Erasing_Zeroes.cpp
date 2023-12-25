#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		string st;
		cin>>st;

        string temp=st;
        sort(temp.begin(), temp.end());
        if(temp[0]==temp[temp.length()-1]){
            cout<<0<<endl;
            continue;
        }

		if(st.length()<3){
			cout<<0<<endl;
			continue;
		}
        int k=0;
        for(int i=0; i<st.length(); i++){
            if(st[i]=='1'){
                k=i;
                break;
            }
        }
        for(int i=k+1; i<st.length(); i++){
            if(st[i]=='0'){
                k=i;
                break;
            }
        }
        int m=st.length()-1;

        for(int i=st.length()-1; i>=0; i--){
            if(st[i]=='1'){
                m=i;
                break;
            }
        }
        for(int i=m-1; i>=0; i--){
            if(st[i]=='0'){
                m=i;
                break;
            }
        }
        int c=0;
        if(m<k){
            cout<<0<<endl;
        } else{
            for(int i=k; i<=m; i++){
                if(st[i]=='0'){
                    c++;
                }
            } cout<<c<<endl;
        }
	}

	return 0;
}