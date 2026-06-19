#include <iostream>

using namespace std;

int main () {
    // Print yang genap aja, kalau i = 100, maka selesai;
    for(int i = 0;;i++) {
        if (i % 2 == 1) {
            continue;
        } else if (i == 100) {
            break;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}