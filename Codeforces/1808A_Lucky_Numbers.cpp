#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int l, r;
        cin>>l>>r;
        
        int compare=INT_MIN, result;
        bool findRes=false;
        for(int i=l; i<=r; i++){
            string st=to_string(i);
            int maximum=INT_MIN, minimum=INT_MAX;
            for(int j=0; j<st.length(); j++){
                maximum=max(maximum, st[j]-'0');
                minimum=min(minimum, st[j]-'0');
                if(maximum-minimum==9){
                    cout<<i<<endl;
                    findRes=true;
                    break;
                }
                if(compare<maximum-minimum){
                    compare=maximum-minimum;
                    result=i;
                }
            }
            if(findRes){
                break;
            }
        }
        if(!findRes){
            cout<<result<<endl;
        }
    }

    return 0;
}