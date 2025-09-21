/*
33. Print first N terms of Fibonacci series
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    if(!(cin>>n)) return 0;
    long long a=0,b=1;
    for(int i=0;i<n;i++){
        if(i==0) cout<<a;
        else if(i==1) cout<<" "<<b;
        else { long long c=a+b; cout<<" "<<c; a=b; b=c; }
    }
    cout<<"\n";
    return 0;
}
