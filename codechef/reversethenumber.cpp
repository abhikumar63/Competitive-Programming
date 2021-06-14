#include<bits/stdc++.h>
using namespace std;
void reverse(int n){
    int x=0;
    while(n){
        x=x*10+n%10;
        n=n/10;
    }
    cout<<x;
}
int main(){
    int t,num;
    cin>>t;
    while(t--){
        cin>>num;
        reverse(num);
    }
    return 0;
}