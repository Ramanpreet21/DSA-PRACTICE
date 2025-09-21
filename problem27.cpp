/*
27. Factorial of a number
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    if(n<0){ cout<<"Invalid\n"; return 0; }
    unsigned long long f = 1;
    for(long long i=2;i<=n;i++) f *= i;
    cout<<f<<endl;
    return 0;
}
