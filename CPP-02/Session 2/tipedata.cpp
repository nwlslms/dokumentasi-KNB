#include <iostream>

using namespace std;

int main () {
    short jumlahSiswa = 28;
    int saldo = 6000000;
    long pangkat = 1200*1200;
    long long faktorial;
    cout << "Ukuran: " << sizeof(short) << endl;
    cout << "Ukuran: " << sizeof(int) << endl;
    cout << "Ukuran: " << sizeof(long) << endl;
    cout << "Ukuran: " << sizeof(long long) << endl;
    cout << "Jumlah siswa: " << jumlahSiswa << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Pangkat: " << pangkat << endl;
    cout << "Faktorial: " << faktorial << endl;

    float desimal = 1.23456789;
    cout << desimal << endl;

    double desimal2 = 1.234567891234;
    cout << desimal2;
    return 0;
}