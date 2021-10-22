#include<iostream>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    while (t--)
    {
        cin>>x>>y>>z;
        if(x==7||y==7||z==7)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}