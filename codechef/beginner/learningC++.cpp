#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,q,j,i,f=0;
    char ch;
    int count;
    cin>>t;
    while(t--){
        cin>>n>>m>>q;
        int arr[n];
        for(i=0;i<n;i++){
            arr[i] = 0;
        }
        count = 0;
    f = 0;
        for(i = 0;i<q;i++){
            cin>>ch>>j;
            if(f == 0){
            if(ch == '+'){
                count++;
                arr[j-1] = 1;
                if(count>m){
                f = 1;
                }
            }
            else{
                if(arr[j-1]==0){
                f = 1;
                }
                else{
                    arr[j-1]=0;
                    count--;
                }
            }
            }
        }
        if(f == 0){
            cout<<"Consistent"<<endl;
        }
        else{
            cout<<"Inconsistent\n";
        }
    }
    return 0;
}