#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int arr[T][4];
    for(int i=0;i<T;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<T;i++){
        int a = (arr[i][2] * arr[i][0]) + (arr[i][3] * (7-arr[i][0]));
        int b = arr[i][1] * 7;
        if(a>=b)
            cout<<a<<endl;
        else
            cout<<b<<endl;
    }
    return 0;
}