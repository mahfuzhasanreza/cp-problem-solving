#include <bits/stdc++.h>
using namespace std;

void printF(int k){
    if(k==1) cout<<"I hate that ";
    else cout<<"I love that ";
}
void printLast(int k){
    if(k==1) cout<<"I hate it ";
    else cout<<"I love it ";
}

int main(){
    int n; cin>>n;
    int k=1;
    n--;
    while(n--){
        printF(k);
        if(k!=1) k=1;
        else k++;
    }
    printLast(k);

    return 0;
}