#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int arr[T],array[T],sum;
    for(int i=0;i<T;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < T; i++)
    {
        sum = 0;
        while (arr[i])
        {
            sum = sum + arr[i]%10;
            arr[i] = arr[i]/10;
        }
        array[i] = sum;
    }
    for (int i = 0; i < T; i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
}