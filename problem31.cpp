/*
31. Reverse a given number
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    bool neg = n<0;
    if(neg) n = -n;
    long long rev=0;
    while(n){ rev = rev*10 + n%10; n/=10; }
    if(neg) rev = -rev;
    cout<<rev<<endl;
    return 0;
}
