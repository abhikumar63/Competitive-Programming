#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,arr[4];
    cin>>T;
    while(T--){
        for (int i = 0; i < 4; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+4);
        if (arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[3])
        {
            cout<<"0";
        }
        else if((arr[0]==arr[1]&&arr[1]==arr[2])||(arr[1]==arr[2]&&arr[2]==arr[3]))
        {
            cout<<"1";
        }
        else
            cout<<"2";
    }
    return 0;
}