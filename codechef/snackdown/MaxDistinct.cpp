#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool sortBySec(const pair<long int,long int> &a, const pair<long int,long int> &b){
    return (a.second < b.second);
}
int main(){
    long int t;
    cin>>t;
    long int n,ele;
    vector<pair<long int,long int>> arr;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ele;
            arr.push_back(make_pair(ele,i));
        }
        long int k=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i].first>k){
                arr[i].first=k;
                k++;
            }
            else if(arr[i]==k){
                arr[i].first=k;
            }
        }
        sort(arr.begin(),arr.end(),sortBySec);
        for(int i=0;i<n;i++){
            cout<<arr[i].first<<" ";
        }
        cout<<"\n";
    }
}