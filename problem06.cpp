/*
6. Input a character and print its ASCII code
*/
#include <iostream>
using namespace std;
int main(){
    char ch;
    if(!(cin>>ch)) return 0;
    cout << int((unsigned char)ch) << endl;
    return 0;
}
