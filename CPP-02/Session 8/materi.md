# CPP-02: Session 8

> Review
- [x] Loop
    - For
        ```cpp
            for(int i = 0; i < 10; i++) {
                cout << i + 1 << endl;
            }
        ```
    - While
        Cek Syarat > Loop
        ```cpp
            int i = 0
            while (i < 10) {
                cout << i + 1 << endl;
                i++;
            }
        ```
    - Do-While
        Loop > Cek Syarat > Loop
        ```cpp
            int i = 0;
            do {
                cout << i + 1 << endl;
            } while (i > 0 && i < 10);
        ```
> Main Course
- [x] Array
    Tipe data yang menyimpan banyak nilai yang identik.
    ```cpp
        int Aljabar1 = 100, Algorithm = 90, Calculus = 80;
        int nilai[3] = {100, 90, 80};
    ```
    - Deklarasi
        - Kosong
            ```cpp
                int hargaBarang[10];
            ```
        - Langsung
            ```cpp
                int hargaBarang[10] = {16000, 27000, 24000} // Array terisi 3 anggota, sisa 7 anggota.
            ```
        - Isi tak terdefinisi
            ```cpp
                int hargaBarang[] = {16000, 27000, 24000}; // Jumlah slot adalah 3
            ```
    - Akses
        Urutan pertama, itu adalah index ke-0. (Indexing dimulai dari 0)
        - Access by Index
            ```cpp
                int nilai[5] = {100, 90, 80};
                cout << nilai[1] << endl; // 90
            ```
        - Tracing through loop
            ```cpp
                int nilai[10];
                for(int i = 0; i < 10; i++) {
                    cin >> nilai[i];
                }
                for(int i = 0; i < 10; i++) {
                    cout << "Nilai index ke-"<< i << ": " << nilai[i] << endl;
                }
            ```
- [x] Array of Characters
    "ANJAY" = 'A', 'N', 'J', 'A', 'Y'
    - Konsep Awal
        ```cpp
            char kata[10] = {'A', 'N', 'J', 'A', 'Y'};
            for(int i = 0; i < 10; i++) {
                cout << kata[i];
            }
        ```
    - Konsep Array of Characters
        Definisi = n + 1
        ```cpp
            char kata[6] = "ANJAY";
            string kata2 = {'A', 'N', 'J', 'A', 'Y'};
            cout << kata << endl;
            for(int i = 0; kata[i] != '\0'; i++) {
                cout << kata2[i];
            }
        ```
    > NOTES: ARRAY OF CHARACTERS = STRING
- [x] Dimensi
    - 1 Dimensi
    - 2 Dimensi
    - 3 Dimensi
    - 4+ Dimensi
    ```cpp
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
    ```
> Next Session
> Pointer