/*
29. Check prime
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    if(n<=1){ cout<<"Not prime\n"; return 0; }
    for(long long i=2;i<= (long long) sqrt(n); i++){
        if(n%i==0){ cout<<"Not prime\n"; return 0; }
    }
    cout<<"Prime\n";
    return 0;
}
