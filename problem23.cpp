/*
23. Sum of first N even natural numbers
Even numbers: 2,4,... => sum = N*(N+1)
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    if(n<0){ cout<<"Invalid\n"; return 0; }
    cout << (n*(n+1)) << endl;
    return 0;
}
