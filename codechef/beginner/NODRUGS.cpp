#include<iostream>
using namespace std;
int main(){
    int t;
    int n,k,l;
    cin>>t;
    while(t--){
        cin>>n>>k>>l;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int max = s[0];
        for(int i=0;i<n-1;i++){
            if(s[i]>max){
                max = s[i];
            }
        }
        if(k<0){
            if(s[n-1]>max)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else{
            int drug = 0;
            while(drug<(l-1)){
                s[n-1] += k;
                drug++;
            }
            if(s[n-1]<=max)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    return 0;
}