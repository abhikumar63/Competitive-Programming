#include<bits/stdc++.h>
using namespace std;
int main(){
    int withdrawl_amt;
    float acc_balance;
    cin>>withdrawl_amt;
    cin>>acc_balance;
    if(withdrawl_amt%5==0){
        if((withdrawl_amt+0.50)<acc_balance){
            acc_balance = acc_balance-(withdrawl_amt+0.50);
            printf("%.2f",acc_balance);
        }
        else
            printf("%.2f",acc_balance);
    }
    else
        printf("%.2f",acc_balance);
    return 0;
}