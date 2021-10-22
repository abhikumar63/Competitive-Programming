#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int arr[6];
    while(T--){
        for (int i = 0; i < 6; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]+arr[1]+arr[2]>arr[3]+arr[4]+arr[5])
            cout<<"1"<<endl;
        else if(arr[0]+arr[1]+arr[2]<arr[3]+arr[4]+arr[5])
            cout<<"2"<<endl;
        else
            cout<<" "<<endl;
    }
    return 0;
}