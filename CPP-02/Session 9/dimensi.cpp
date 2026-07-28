#include <iostream>

using namespace std;

int main () {
    /*
    2x2
    1 2
    3 4
    */
    int matrix1[4] = {1, 2, 3, 4};
    for(int i = 0; i < 4; i++) {
        if (i % 2 == 1) {
            cout << matrix1[i] << endl;
            continue;
        }
        cout << matrix1[i] << " ";
    }
    
    int matrix2[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    cout << "\n\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    int matrix3[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };
    cout << "\n\n";
    for(int matrix = 0; matrix < 2; matrix++) {
        for(int baris = 0; baris < 3; baris++) {
            for(int kolom = 0; kolom < 3; kolom++) {
                cout << matrix3[matrix][baris][kolom] << " ";
            }
            cout << endl;
        }
        cout << "\n\n";
    }
    return 0;
}