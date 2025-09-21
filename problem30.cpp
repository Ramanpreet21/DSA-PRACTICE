/*
30. LCM of two numbers
*/
#include <iostream>
#include <algorithm>
using namespace std;
long long gcd(long long a,long long b){ return b==0? a : gcd(b, a%b); }
int main(){
    long long a,b;
    if(!(cin>>a>>b)) return 0;
    if(a==0 || b==0){ cout<<0<<"\n"; return 0; }
    long long l = llabs(a / gcd(a,b) * b);
    cout<<l<<endl;
    return 0;
}
