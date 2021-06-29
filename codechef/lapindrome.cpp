#include<bits/stdc++.h>
using namespace std;
string check(string s){
    int n = s.length();
    int k;
    if(n%2==0){
        k=n/2;
    }
    else{
        int x=n/2;
        s.erase(s.begin()+x);
        k = s.length()/2;
    }
    string s1=s.substr(0,k);
    string s2=s.substr(k);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1.compare(s2)==0)
        return "YES";
    else
        return "NO";
}
int main(){
    int T;
    string S;
    cin>>T;
    while(T--){
        cin>>S;
        cout<<check(S)<<endl;
    }
    return 0;
}