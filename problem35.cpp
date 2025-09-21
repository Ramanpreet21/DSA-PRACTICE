/*
35. HCF (GCD) of two numbers
*/
#include <iostream>
using namespace std;
long long gcd(long long a,long long b){ return b==0? a : gcd(b,a%b); }
int main(){
    long long a,b;
    if(!(cin>>a>>b)) return 0;
    cout<< llabs(gcd(a,b)) << endl;
    return 0;
}
