/*
40. Check Armstrong number (for n-digit number: sum of digits^n equals number)
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    long long temp = n;
    int digits = 0;
    long long t = temp;
    if(t==0) digits=1;
    while(t){ digits++; t/=10; }
    long long sum = 0;
    t = temp;
    while(t){ int d = t%10; sum += (long long) pow(d, digits); t/=10; }
    cout << (sum==n ? "Armstrong\n" : "Not Armstrong\n");
    return 0;
}
