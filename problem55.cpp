#include <iostream>
using namespace std;

int main() {
    int size = 5;
    // Upper part
    for (int i = 1; i <= size; ++i) {
        for (int j = i; j < size; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    // Lower part
    for (int i = size - 1; i >= 1; --i) {
        for (int j = i; j < size; j++) cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
