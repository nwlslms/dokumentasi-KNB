# C-01: Session 6

> Review
- [x] Pointer
    Pointer adalah variabel yang menunjuk alamat variabel lainnya<br>
    Isi dari variabel pointer adalah alamat pointer yang ditunjuk
     - Pointer `*`
        ```c
            TipeData *namaPointer = &variabelDitunjuk;
            //Mengakses nilai yang ditunjuk
            printf("%d", *namaPointer);

            //Mengakses alamat variabel
            printf("%p", namaPointer);

            //Alamat variabel pointer
            printf("%p", &namaPointer);
        ```
     - Pointer to pointer `*`
        ```c
            int a = 10;
            //Variabel Pointer ptr1 menunjuk ke variabel a
            int *ptr1 = &a;
            int *ptr2 = ptr1;

        ```
        Kelemahan: Dia ga bisa mengubah variabel pointer yang ditunjuk
     - Double Pointer `**`
        ```c
            int a = 10;

            int *ptr1 = &a;

            int **ptr2 = &ptr1;
            // Akses nilai yang ditunjuk ptr1
            printf("%d", **ptr2);

            //Akses variabel yang ditunjuk ptr1
            printf("%p", *ptr2);

            //Akses alamat variabel yang ditunjuk
            printf("%p", ptr2);

            //Akses alamat double pointer
            printf("%p", &ptr2);
        ```
> Main Course
- [x] Array
    Sekumpulan data yang serupa
    5 Anak = Ridwan, Ucup, Yanto, Ahmad, Supri
    siswa1 = ..., siswa2 = ..., siswa3 = ...
    ``siswa [5] = {""}``
    - 1 Dimensi
        Baris
        Menyimpan 1 kategori data
    - 2 Dimensi
        Baris dan kolom
        Menyimpan 2 kategori data
    - 3 Dimensi
        Halaman, Baris, kolom
        Menyimpan 3 kategori data

- [x] Pointer dan Array
    - Array Statis
        Diem<br>
        Lu alokasi X, maka jumlahnya tetep X<br>
        Alokasi data, ditentukan saat coding
        ```c
            int data[X];
        ```
    - Array Dinamis
        Berubah-ubah<br>
        Kita alokasi saat program berjalan<br>
        - Fungsi `void malloc(jumlahByte)`
            Memory allocation: Alokasi memori pada komputer
        - Fungsi `int sizeof(TipeData)`
            Mengetahui ukuran dari suatu tipe data
        ```c
            #include <stdio.h>
            #include <stdlib.h>

            int main () {
                // 10 data int = 4 * 10 = 40
                int n;
                scanf("%d", &n);
                int *data = (int*)malloc(sizeof(int) * n);
                // TipeData *namaPointer = (TipeData*)malloc(sizeof(TipeData) * jumlahData);
                return 0;
            }
        ```
        Setelah pemakaian, hapus manual
        - free(pointer)
            Untuk membebaskan memori dan nilai di komputer
    - Hubungan pointer dan array
        Array = pointer
        ```c
            #include <stdio.h>

            int main () {
                int data[] = {1, 10, 5, 7, 3};
                for(int i = 0; i < 5; i++) {
                    printf("%d | %p\n", data[i], &data[i]);
                }
                printf("\n%p", data);
                printf("\n%d\n", *data);
                int *ptr1 = data;
                for (int i = 0; i < 5; i++) {
                    printf("%d | %p\n", ptr1[i], &ptr1[i]);
                }
                return 0;
            }
        ```
        Akses: array[index] || *(array + i)
> Next Session