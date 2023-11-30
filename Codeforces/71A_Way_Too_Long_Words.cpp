#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    string st[100];
    for(int i=0; i<t; i++){
        cin>>st[i];
    }

    for(int i=0, j=0; i<t; i++){
        if(st[j].size()<=10){
            cout<<st[j]<<endl;
            j++;
            continue;
        }

        cout<<st[j][0]<<st[j].size()-2<<st[j][st[j].size()-1]<<endl;

        j++;
    }

    return 0;
}