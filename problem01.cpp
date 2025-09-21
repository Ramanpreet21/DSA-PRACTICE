#include <iostream>
using namespace std;
int main() {
    long long a,b,c;
    if(!(cin>>a>>b>>c)) return 0;
    double avg = (a + b + c) / 3.0;
    cout << avg << endl;
    return 0;
}
