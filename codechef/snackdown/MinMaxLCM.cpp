#include<iostream>
using namespace std;
int main(){
    int t,x,k;
    cin>>t;
    while(t--){
        cin>>x>>k;
        cout<<2*x<<" "<<x*k*(x*k-1)<<endl;
    }
}