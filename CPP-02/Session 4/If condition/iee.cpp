#include <iostream>

using namespace std;

int main () {
    int bilangan;
    cin >> bilangan;
    if (bilangan == 0) {
        cout << "Bilangan ini adalah 0\n";
    } else if (bilangan < 0) {
        cout << "Bilangan ini adalah negatif\n";
    } else if (bilangan > 0) {
        cout << "Bilangan ini adalah positif\n";
    } else {
        cout << "TIDAK TERDEFINISI\n";
    }
    return 0;
}