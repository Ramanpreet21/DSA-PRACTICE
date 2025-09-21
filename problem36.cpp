/*
36. Check whether two numbers are co-prime
*/
#include <iostream>
using namespace std;
long long gcd(long long a,long long b){ return b==0? a : gcd(b,a%b); }
int main(){
    long long a,b;
    if(!(cin>>a>>b)) return 0;
    cout << (llabs(gcd(a,b))==1 ? "Coprime\n" : "Not coprime\n");
    return 0;
}
