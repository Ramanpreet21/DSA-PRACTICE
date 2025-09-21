/*
8. Input three characters and display them with their ASCII codes
*/
#include <iostream>
using namespace std;
int main(){
    char a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    cout << a << " " << int((unsigned char)a) << endl;
    cout << b << " " << int((unsigned char)b) << endl;
    cout << c << " " << int((unsigned char)c) << endl;
    return 0;
}
