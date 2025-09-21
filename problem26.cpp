/*
26. Sum of cubes of first N natural numbers = (N(N+1)/2)^2
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    if(n<0){ cout<<"Invalid\n"; return 0; }
    long long s = n*(n+1)/2;
    cout << (s*s) << endl;
    return 0;
}
