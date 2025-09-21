/*
19. Given month (1-12) and year -> print days in that month
*/
#include <iostream>
using namespace std;
bool isLeap(int y){ return (y%4==0 && y%100!=0) || (y%400==0); }
int main(){
    int m,y;
    if(!(cin>>m>>y)) return 0;
    if(m<1 || m>12){ cout<<"Invalid month\n"; return 0; }
    int days = 31;
    if(m==2) days = isLeap(y) ? 29 : 28;
    else if(m==4 || m==6 || m==9 || m==11) days = 30;
    cout<<days<<endl;
    return 0;
}
