#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, n;
    cin>>a>>b>>n;

    bool isPossible=false;
    for(int i=0; i<=9; i++){
        string str=to_string(a);
        string s=to_string(i);
        s=str+s;
        int num=stoi(s);
        if(num%b==0){
            isPossible=true;
            a=stoi(s);
            break;
        }
    }
    if(!isPossible){
        cout<<-1<<endl;
    } else{
        string str(n-1, '0');
        cout<<a<<str<<endl;
    }

    return 0;
}