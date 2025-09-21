/*
10. Convert time "HH:MM" -> print separately or confirm format
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    if(!(cin>>s)) return 0;
    string hh = s.substr(0,2);
    string mm = s.substr(3,2);
    cout << "Hours: " << hh << " Minutes: " << mm << endl;
    return 0;
}
