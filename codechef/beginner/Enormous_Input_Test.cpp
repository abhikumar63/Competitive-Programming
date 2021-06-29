#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,t;
    int count=0;
    cin>>n>>k;
    while (n--)
    {
        cin>>t;
        if(t%k==0)
            count++;
    }
    cout<<count;
    return 0;
}