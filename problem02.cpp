/*
2. Circumference of a circle
Input: radius (double)
*/
#include <iostream>
using namespace std;
int main(){
    double r;
    if(!(cin>>r)) return 0;
    const double PI = 3.141592653589793;
    cout << (2 * PI * r) << endl;
    return 0;
}
