/*
28. Count digits in a number
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    if(n==0){ cout<<1<<endl; return 0; }
    if(n<0) n = -n;
    int cnt=0;
    while(n){ cnt++; n/=10; }
    cout<<cnt<<endl;
    return 0;
}
