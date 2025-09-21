/*
38. Print all prime numbers between two given numbers (inclusive)
*/
#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
int main(){
    int a,b;
    if(!(cin>>a>>b)) return 0;
    if(a>b) swap(a,b);
    for(int i=a;i<=b;i++) if(isPrime(i)) cout<<i<<" ";
    cout<<"\n";
    return 0;
}
