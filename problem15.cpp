/*
15. Triangle type: equilateral, isosceles, scalene
*/
#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    if(a<=0 || b<=0 || c<=0) { cout<<"Invalid\n"; return 0; }
    if(a==b && b==c) cout<<"Equilateral\n";
    else if(a==b || b==c || a==c) cout<<"Isosceles\n";
    else cout<<"Scalene\n";
    return 0;
}
