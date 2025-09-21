/*
22. Sum of first N natural numbers
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    if(n<0) { cout<<"Invalid\n"; return 0;}
    long long sum = n*(n+1)/2;
    cout<<sum<<endl;
    return 0;
}
