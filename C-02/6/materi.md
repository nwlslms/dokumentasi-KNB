# C-02: Session 6

> Review
- [x] Looping
    - For
        ```c
            //1 - 10
            for(int i = 0; i < 10; i++) {
                printf("%d", (i+1));
            }
        ```
    - While
        ```c
            int i = 0;
            while(i < 10) {
                printf("%d", (i+1));
                i++
            }
        ```
    - Do While
        ```c
            int i = 0;
            do {
                printf("%d", (i+1));
                i++;
            } while (i < 10);
        ```
    - Break dan Continue
        ```c
            // Berhenti ketika 57, dan ngeprint yang ganjil saja
            for (int i = 0; i < 100; i++) {
                if(i == 57) {
                    break;
                }
                if(i % 2 == 1) {
                    printf("%d", i+1);
                } else {
                    continue;
                }
            }
        ```

> Main Course
- [x] Array
    ```c
        // Data 25 siswa
        int nilai1 = 100;
        int nilai2 = 86;
        // ...
        int nilai25 = 70;

        int nilai[25]; // Array
    ```
    `Array`: Variabel yang menyimpan nilai serupa dalam jumlah banyak
    ```TipeData namaArray[N];```
    ```c
        int nim[12];
        float bb[12];
        int umur[12];
    ```
    Cara Ngisi
    ```c
        // Deklarasi array dan langsung isi semua
        int nim[12] = {1232, 5671, 9121, 8759, ..., 10000};

        // Deklarasi array dan isi beberapa
        float bb[12] = {70.2, 66.0, 120.0};

        // Array dimulai dari index 0
        // Kalau punya 12 data, yang bisa diisi 0, 1, 2, 3, 4, ..., 11;

        // Mengubah data
        bb[1] = 76.9;
        bb[8] = 55.2;
    ```

- [x] Array of characters
    ```char NamaVariabel [n];```
    Jumlah karakter yang bisa ditampung adalah `n - 1`. Di akhir ada `'\0` (1 karakter).

- [x] Jenis
    Ibarat Kampus,
    - 1 Dimensi
        Nilai 1 mahasiswa
        ```c
            // Misal dalam semester ada 7 nilai
            float nilai[7];
        ```
    - 2 Dimensi
        Nilai n mahasiswa
        ```c
            // 25 Siswa dalam 1 kelas, mau nyimpen 7 nilai mereka
            float nilai[25][7];
            // Mahasiswa ke 1, nilai ke 4
            // nilai[0][3] = 0.37;
        ```
    - 3 Dimensi
        Nilai n kelas
        ```c
            // 5 kelas, 25 siswa dalam 1 kelas, mau nyimpen 7 nilai mereka
            float nilai[5][25][7];
        ```
> Next Session
Pointer