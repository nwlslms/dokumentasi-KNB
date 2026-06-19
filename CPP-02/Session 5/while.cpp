#include<iostream>

using namespace std;

int main () {
    int jumlahNilai;
    cin >> jumlahNilai;
    int total = 0;
    int i = 0;
    while (i < jumlahNilai) {
        int nilai;
        cout << "nilai ke-" << i+1 << ": ";
        cin >> nilai;
        total += nilai;
        i++;
    }
    cout << "rata rata" << jumlahNilai << "nilai adalah" << total/jumlahNilai << endl;
    return 0;

}