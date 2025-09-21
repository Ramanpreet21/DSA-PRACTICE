/*
9. Convert date "DD/MM/YYYY" to "Day - DD, Month - MM, Year - YYYY"
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    if(!(cin>>s)) return 0;
    // naive parse
    string d = s.substr(0,2);
    string m = s.substr(3,2);
    string y = s.substr(6);
    cout << "Day - " << d << " , Month - " << m << " , Year - " << y << endl;
    return 0;
}
