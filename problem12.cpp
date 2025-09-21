/*
12. Age classification: child, teenager, adult, senior
*/
#include <iostream>
using namespace std;
int main(){
    int age;
    if(!(cin>>age)) return 0;
    if(age < 0) { cout<<"Invalid\n"; return 0; }
    if(age <= 12) cout<<"Child\n";
    else if(age <= 17) cout<<"Teenager\n";
    else if(age <= 59) cout<<"Adult\n";
    else cout<<"Senior\n";
    return 0;
}
