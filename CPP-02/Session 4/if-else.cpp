#include <iostream>

using namespace std;

int main () {
    int bilangan;
    cin >> bilangan;
    
    if (bilangan % 2 == 0) {
        cout << "Bilangan genap" << endl;
    } else {
        cout << "Bilangan ganjil\n";
    }
    return 0;
}