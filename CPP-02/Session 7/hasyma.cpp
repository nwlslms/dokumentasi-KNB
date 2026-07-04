#include <iostream>

using namespace std;

int main () {
    int angka = 0;
    int tebakan = 0;
    while (angka != tebakan) {
        cin >> tebakan;
    }
    cout << "Sukses";

    do {
        cin >> tebakan;
    } while (angka!= tebakan);
    cout << "Sukses";
    return 0;
}