# C-02: Session 9

> Review
- [ ] Pointer
    `&`: Ampersand operator untuk alamat variabel
    `*`: Asterisk operator untuk operasi kali dan variabel pointer
    ```c
        int a = 10;
        int *ptr = &a;
        printf("%d %p", *ptr, ptr);
    ```
    - Pointer
        Pointer yang menunjuk ke variabel lain
    - Pointer to pointer.
        Pointer yang menunjuk ke variabel pointer lain (Perantara).
    - Double Pointer
        Pointer yang menyimpan alamat sebuah pointer.
> Main Course
- [x] Array dan Pointer
    - Array adalah pointer yang menunjuk ke variabel urutan pertama
        ```c
            int array[5] = {1, 2, 3, 4 , 5};
            for(int i = 0; i < 5; i++) {
                printf("%d %p\n", array[i], &array[i]); // Indexing
            }
            printf("%d %p", *(array + 3), array);
        ```
    - Array == pointer
        ```c
            int *pointer;
            pointer = &array[0];
            printf("%d %p\n", pointer[0], &pointer[0]);
            printf("----------------------\n");
            for(int i = 0; i < 5;i ++) {
                printf("%d %p\n", pointer[i], &pointer[i]);
            }
        ```
    - Access by Index
    - Access through pointer

- [x] Array statis dan dinamis
    - Statis
        `Tetap`
        Dalam pemrograman, array statis: Tidak bisa ditambah, ditentukan di awal, ga bisa dikurangin.
        ```c
            int nilai[100];
        ```
    - Dinamis
        `Berubah`
        Dalam pemrograman, array dinamis: Bisa ditambah, ditentukan saat program berjalan, bisa dikurangin.
        ```c
            // Salah
            // int n;
            // scanf("%d", &n);
            // int array[n];
        ```
        `stdlib.h`
            - `sizeof(TipeData)`: Mengetahui ukuran byte suatu tipe data.
            - `malloc(n memory)` (Memory Allocation): Mengalokasikan memori yang dibutuhkan di komputer.
            - `free(alamat)`: Membebaskan memori yang dialokasikan melalui `malloc(n memory)`.
> Next Session
> Review Dinamis, Projek