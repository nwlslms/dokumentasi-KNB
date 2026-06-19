#include <iostream>

using namespace std;

int main () {
    // Ngitung rata-rata nilai
    // 100, 90, 80, 70, 95
    int jumlahNilai;
    cin >> jumlahNilai;
    int total = 0;
    for(int i = 0; i < jumlahNilai; i++) {
        float nilai;
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> nilai;
        total += nilai;
    }
    cout << "Rata-rata " << jumlahNilai << " nilai adalah: " << total/jumlahNilai << endl;
    return 0;
}