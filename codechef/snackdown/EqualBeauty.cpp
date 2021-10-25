#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
        long int n,k,ans1=0,ans2=0,d2,d1;
        long int m = INT_MAX;
        cin>>n;
        vector<long int> a(n);
        for(long int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long int l=1;
        long int r=n-2;
        if(n==2){
            cout<<0<<endl;
            continue;
        }
        else if(n==3){
            cout<<min(a[1]-a[0],a[2]-a[1])<<endl;
            continue;
        }
        for(long int i=0;i<n;i++){
            ans1 += abs(a[i]-a[(n-1)/2]);
        }
        for(long int i=0;i<n;i++){
            ans2 += abs(a[i]-a[1+(n-1)/2]);
        }
        m=min(ans1,ans2);
        while(l<r){
            d2 = a[n-1]-a[l],d1 = a[r]-a[0];
            m = min(m,abs(d1-d2));
            if(d1<d2){
                l++;
            }
            else{
                r--;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}