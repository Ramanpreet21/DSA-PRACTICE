/*
17. Print leap years in a range [start, end]
*/
#include <iostream>
using namespace std;
bool isLeap(int y){ return (y%4==0 && y%100!=0) || (y%400==0); }
int main(){
    int a,b;
    if(!(cin>>a>>b)) return 0;
    if(a>b) swap(a,b);
    for(int y=a;y<=b;y++) if(isLeap(y)) cout<<y<<"\n";
    return 0;
}
