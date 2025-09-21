/*
16. Temperature conversion: user chooses FtoC or CtoF
Input: choice char 'F' or 'C' then value
*/
#include <iostream>
using namespace std;
int main(){
    char t;
    double v;
    if(!(cin>>t>>v)) return 0;
    if(t=='F' || t=='f'){
        double c = (v - 32) * 5.0/9.0;
        cout<<c<<endl;
    } else if(t=='C' || t=='c'){
        double f = v * 9.0/5.0 + 32;
        cout<<f<<endl;
    } else cout<<"Invalid option\n";
    return 0;
}
