#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x<=y){
            cout<<(y-x+1)/2 + (y-x)%2<<endl;
        }
        else
            cout<<(x-y)<<endl;
    }
    return 0;
}