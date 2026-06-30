#include <iostream>

using namespace std;

int main () {
    short jumlahBarang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlahBarang;
    int totalHarga = 0;
    for(int i = 0; i < 3; i++) {
        int harga;
        cout << "Harga barang ke-" << i+1 << ": ";
        cin >> harga;
        totalHarga += harga;
    }
    float diskon;
    float persen = 10 / (float)100;
    if (totalHarga >= 100000) {
        diskon = totalHarga * persen;
    }
    cout << "Total sebelum diskon: " << totalHarga << endl;
    cout << "Diskon: " << diskon << endl;
    cout << "Total bayar: " << totalHarga - diskon << endl;
    return 0;
}