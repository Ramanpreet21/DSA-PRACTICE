/*
18. Find the middle (second largest) number among three
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    long long a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    long long arr[3]={a,b,c};
    sort(arr,arr+3);
    cout<<arr[1]<<endl;
    return 0;
}
