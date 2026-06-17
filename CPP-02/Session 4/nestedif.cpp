#include <iostream>

using namespace std;

int main () {
    int bilangan;
    cin >> bilangan;
    if (bilangan == 0) {
        cout << "Ini adalah 0\n";
    } else if (bilangan < 0) {
        cout << "Bilangan ini adalah negatif\n";
        if (bilangan % 2 == 0) {
            cout << "Bilangan ini juga genap\n";
        } else {
            cout << "Bilangan ini juga ganjil\n";
        }
    } else if (bilangan > 0) {
        cout << "Bilangan ini adalah positif\n";
        if (bilangan % 2 == 0) {
            cout << "Bilangan ini juga genap\n";
        } else {
            cout << "Bilangan ini juga ganjil\n";
        }
    }
    return 0;
}