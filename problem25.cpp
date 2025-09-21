/*
25. Sum of squares of first N natural numbers = N(N+1)(2N+1)/6
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    if(n<0){ cout<<"Invalid\n"; return 0; }
    long long res = n*(n+1)*(2*n+1)/6;
    cout<<res<<endl;
    return 0;
}
