#include <iostream>
using namespace std;
int main() {
    // your code goes here
    long T; 
    cin >> T;
    while(T--){
        long g,c;
        cin >> g >> c;
        long ans = ((c*c)/(2*g));
        cout << ans << "\n";
    }
    return 0;
}