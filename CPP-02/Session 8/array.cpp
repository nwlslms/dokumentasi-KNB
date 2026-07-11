#include <iostream>
#include <string>
using namespace std;

int main () {
    int dimensi_1[7]; // 1 Dimensi
    dimensi_1[0] = 100; // Nilai aljabar linear

    int dimensi_2[7][7];
    //7 anak, nyimpan 7 nilai
    // anak ke-1, nilai ke-3
    dimensi_2[0][2] = 80; // Calculus

    int dimensi_3[2][7][7];
    // 2 kelas, 7 anak, 7 nilai
    // kelas ke-2, anak ke 5, nilai ke-2
    dimensi_3[1][4][1] = 88;


    int dimensi_4[2][2][7][7];
    // 2 kampus, 2 kelas, 7 anak, 7 nilai
    // kampus ke-1, kelas-1, anak ke-1, nilai ke-5
    dimensi_4[0][0][0][4] = 95;

    int matrix[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout <<  matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}