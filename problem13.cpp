/*
13. Grade from score 0-100
Typical scale:
90-100: A
80-89: B
70-79: C
60-69: D
<60: F
*/
#include <iostream>
using namespace std;
int main(){
    int s;
    if(!(cin>>s)) return 0;
    if(s<0 || s>100){ cout<<"Invalid\n"; return 0; }
    if(s>=90) cout<<"A\n";
    else if(s>=80) cout<<"B\n";
    else if(s>=70) cout<<"C\n";
    else if(s>=60) cout<<"D\n";
    else cout<<"F\n";
    return 0;
}
