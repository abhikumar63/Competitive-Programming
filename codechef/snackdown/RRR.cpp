#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans = 2*(n-k);
        ans += 2*((k-1)/2);
        cout<<ans<<endl;
    }
    return 0;
}