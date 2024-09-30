#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        sort(str.begin(), str.end());

        int cnt=1;
        int ans=0;
        bool k=false;
        for(int i=1; i<str.size(); i++){
            if(str[i]==str[i-1]){
                cnt++;
                if(i==n-1) k=true;
                continue;
            }
            if(cnt>=(int)str[i-1]-64) ans++;
            cnt=1;
        }
        if(k && cnt>=(int)str[n-1]-64) ans++;
        cout<<ans<<endl;
    }

    return 0;
}