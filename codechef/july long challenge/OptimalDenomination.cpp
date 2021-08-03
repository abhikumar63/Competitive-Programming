#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int high=A[0],low=A[0],ih,il;
        for(int i=0;i<n;i++){
            if(high>A[i]){
                high = A[i];
                ih=i;
            }
            if(low<A[i]){
                low = A[i];
                il=i;
            }
        }
        A[ih] = A[il];
        int sum = 0;
        for(int i=0;i<n;i++){
            int notes = (int)(A[i]/A[il]);
            sum = sum + notes;
        }
        cout<<sum<<"\n";
    }
    return 0;
}