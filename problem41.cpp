/*
41. Draw a pyramid pattern (sample)
Input: number of rows (n)
This is a sample pyramid of stars; replace if specific pattern required.
*/
#include <iostream>
using namespace std;
int main(){
    int n; if(!(cin>>n)) return 0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int k=0;k<2*i-1;k++) cout<<"*";
        cout<<"\n";
    }
    return 0;
}
