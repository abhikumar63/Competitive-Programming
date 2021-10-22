#include<iostream>
using namespace std;
int main(){
    int t,i,ind,eng;
    int arr[5];
    cin>>t;
    while(t--){
        ind=0;
        eng=0;
        for(i=0;i<5;i++)
            cin>>arr[i];
        for(i=0;i<5;i++){
            if(arr[i]==1)
                ind++;
            else if(arr[i]==2)
                eng++;
        }
        if(ind>eng)
            cout<<"INDIA"<<endl;
        else if(ind<eng)
            cout<<"ENGLAND"<<endl;
        else
            cout<<"DRAW"<<endl;
    }
    return 0;
}