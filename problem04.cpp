/*
4. Volume of a cuboid
Input: length width height
*/
#include <iostream>
using namespace std;
int main(){
    double l,w,h;
    if(!(cin>>l>>w>>h)) return 0;
    cout << (l * w * h) << endl;
    return 0;
}
