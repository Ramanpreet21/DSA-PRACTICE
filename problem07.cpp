/*
7. Input an ASCII code and print corresponding character
*/
#include <iostream>
using namespace std;
int main(){
    int code;
    if(!(cin>>code)) return 0;
    cout << char(code) << endl;
    return 0;
}
