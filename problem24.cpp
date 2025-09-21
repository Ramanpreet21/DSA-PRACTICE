/*
24. Sum of first N odd natural numbers
Odd numbers: 1,3,5,... sum = N^2
*/
#include <iostream>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    if(n<0){ cout<<"Invalid\n"; return 0; }
    cout << (n*n) << endl;
    return 0;
}
