#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll tc;
    cin>>tc;

    while(tc--){
        ll d, p, c, t;
        cin>>d>>p>>c>>t;

        ll total_t=(d+6)/7;
        ll low=0, high=d;
        ll ans=0;
        while(low<=high){
            ll mid=low+(high-low)/2;
            ll point=mid*c + t*min(2*mid, total_t);
            if(p>point){
                low=mid+1;
            } else{
                ans=mid;
                high=mid-1;
            }
        }
        cout<<d-ans<<endl;
    }

    return 0;
}