#include <iostream>

using namespace std;

int main () {
    string namaPanggilan;
    int totalBarang, hargaBarang;
    // int totalHarga;
    cin >> namaPanggilan >> totalBarang >> hargaBarang;

    // totalHarga = totalBarang * hargaBarang;
    cout << "Nama\t: " << namaPanggilan << "\nTotal\t: " << (totalBarang * hargaBarang) << endl;
    return 0;
}