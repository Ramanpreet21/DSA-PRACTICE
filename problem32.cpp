/*
32. Find Nth term of Fibonacci (0-indexed: 0,1,1,2,...)
Use iterative method
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    if(n==0){ cout<<0<<endl; return 0; }
    if(n==1){ cout<<1<<endl; return 0; }
    long long a=0,b=1;
    for(long long i=2;i<=n;i++){
        long long c = a + b;
        a = b; b = c;
    }
    cout<<b<<endl;
    return 0;
}
