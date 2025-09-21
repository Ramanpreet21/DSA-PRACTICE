/*
39. Find the next prime > given number
*/
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(long long n){
    if(n<=1) return false;
    for(long long i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    long long k = n+1;
    while(!isPrime(k)) k++;
    cout<<k<<endl;
    return 0;
}
