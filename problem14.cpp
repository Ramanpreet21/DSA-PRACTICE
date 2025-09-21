/*
14. Check if first integer divisible by second
*/
#include <iostream>
using namespace std;
int main(){
    long long a,b;
    if(!(cin>>a>>b)) return 0;
    if(b==0) { cout<<"Division by zero\n"; return 0; }
    cout << ( (a % b == 0) ? "Divisible\n" : "Not divisible\n" );
    return 0;
}
