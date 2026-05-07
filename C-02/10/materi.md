# C-02: Session 10

> Review
- [x] Array
    Sebuah tipe data yang berisi nilai yang serupa
    ```c
        TipeData namaVariabel [n];
        int nilai[10];
        nilai[0] = 100;
        int nilai[10] = {1, 2, 3, 4, 5, 6};
    ```
    `1 2 3 4 5 6 7 8 9 10`
    Nilai `6` urutan ke 6, index ke-5
- [x] Pointer
    Variabel yang menunjuk ke variabel lainnya.
    `SYARAT`:
    - Nyimpen alamat doang
    - Akses nilai ditunjuk: `*`
    - Akses alamat yang ditunjuk: ``
    - Akses alamat pointer: `&`
    `&`: Alamat
    `*`: Operasi kali / Pointer
    ```c
        // TipeData *namaVariabel = &yangDitunjuk;
        int a = 10;
        int *ptr = &a;

    ```
    - Pointer sederajat (Pointer to pointer)
        ```c
            int a = 10;
            int *ptr1 = &a;
            int *ptr2 = ptr1;
            printf("%d", *ptr2); // Menghasilkan 10
        ```
    - Double Pointer
        ```c
            int a = 10;
            int *ptr1 = &a;
            int **ptr2 = &ptr1;
            printf("%p %d", *ptr2, **ptr2);
        ```

- [x] Pointer dan Array
    - Array adalah pointer yang menunjuk ke alamat index pertama
        ```c
            int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            for(int i = 0; i < 10; i++) {
                printf("%d %p\n", arr[i], &arr[i]);
            }
            printf("%d %p %p", *arr, arr, &arr);
        ```
    -  Array == Pointer
        ```c
            int a = 10;
            int *ptr = &a;
            printf("%d %p %p\n", *ptr, ptr, &ptr);
            printf("%d %p\n", ptr[0], &ptr[0]);
        ```

- [x] Statis dan Dinamis
    - Statis
        Array yang anggotanya tetap. Didefinisikan saat program ditulis.
        ```c
            int arr[19];
        ```
    - Dinamis
        Array  yang anggotanya berubah. Didefinisikan saat program berjalan.
        ```c
            // 10 Anggota array dinamis
            int *array = (int*) malloc (sizeof(int) * 10);
            //Pakai
            /// Bebaskan
            free(array);
        ```
> Main Course
- Array Dinamis
    `stdlib.h`: Library untuk memori
        - `free(variabel)`: Membebaskan suatu variabel (Hapus di memori)
        - `malloc(Jumlah memori)`: Alokasi memori yang dibutuhkan di komputer
        - `calloc(jumlah, memori)`: Alokasi memori array yang dibutuhkan di komputer
        - `realloc(Variabel, Jumlah Memori)`: Realokasi memori
        Pembeda `malloc()` dan `calloc()`: Awal inisiasi nilainya<br>
    Pakai malloc():
    ```c
        int *array = (int*)malloc(sizeof(int) * 10);
        for (int i = 0; i < 10; i++) {
            array[i] = 10;
        }
    ``` 
    Pakai calloc():
    ```c
        int *array = (int*)calloc(10, sizeof(int));
    ```
    Pakai realloc():
    ```c
        array2 = (int*) realloc(array2, n * sizeof(int));
    ```

- [ ] On Review
    > Buatlah suatu program penampung nilai secara dinamis. Pertama user diminta sejumlah n elemen untuk menampung. Setiap mau menampung nilai, dicek, apakah data sudah penuh atau belom. Kalau belom, tambahkan ke array, kalau sudah penuh, maka realocation sejumlah 5.

> Next Session
Projek