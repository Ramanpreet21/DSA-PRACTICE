/*
11. (repeat of 8) Input three characters and display ascii codes
*/
#include <iostream>
using namespace std;
int main(){
    char a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    cout<<a<<" "<<int((unsigned char)a)<<"\n"<<b<<" "<<int((unsigned char)b)<<"\n"<<c<<" "<<int((unsigned char)c)<<"\n";
    return 0;
}
