/*
34. Check whether a number is in Fibonacci series
*/
#include <iostream>
#include <cmath>
using namespace std;
bool isPerfect(long long x){
    long long r = (long long) sqrt((double)x);
    return r*r==x;
}
bool isFib(long long n){
    // n is fib iff 5n^2+4 or 5n^2-4 is perfect square
    long long a = 5*n*n + 4;
    long long b = 5*n*n - 4;
    return isPerfect(a) || isPerfect(b);
}
int main(){
    long long n;
    if(!(cin>>n)) return 0;
    cout << (isFib(n) ? "Yes\n" : "No\n");
    return 0;
}
