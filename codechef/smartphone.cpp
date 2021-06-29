#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int T,i,money;
    cin>>T;
    long long int arr[T];
    for(i=0; i<T; i++){
        cin>>arr[i];
    }
    sort(arr,arr+T);
    money = arr[T-1];
    for(i=T-2; i>=0; i--){
        if(arr[i]*(T-i)>money){
            money = arr[i]*(T-i);
        }
    }
    cout<<money;
}