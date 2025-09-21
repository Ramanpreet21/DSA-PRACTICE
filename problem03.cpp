/*
3. Simple interest
Input: principal, rate(percent), time(years)
*/
#include <iostream>
using namespace std;
int main(){
    double p,r,t;
    if(!(cin>>p>>r>>t)) return 0;
    double si = (p * r * t) / 100.0;
    cout << si << endl;
    return 0;
}
