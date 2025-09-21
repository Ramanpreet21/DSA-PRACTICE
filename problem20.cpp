/*
20. Largest of four numbers
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long a,b,c,d;
    if(!(cin>>a>>b>>c>>d)) return 0;
    cout<<max(max(a,b), max(c,d))<<endl;
    return 0;
}
