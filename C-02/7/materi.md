# C-02: Session 7
> Review
- [x] Array
    Sebuah tipe data yang bisa menampung banyak data serupa
    ```c
        int nilai1 = 100;
        int nilai2 = 80;

        int nilai[5] = {10, 9, 5, 7, 8};
        int nilai[5] = {10, 5, 6}; //Sisanya adalah angka random
        int nilai[5];
        nilai[0] = 100;
    ```
    - 1 Dimensi
        Matrix 3x1
        ```c
            int matrix_baris [3] = {10, 7, 8};
            //Matrix: 10, 7, 8
        ```
    - 2 Dimensi
        Matrix 2x2
        ```c
            int matrix_persegi [2][2] = {
                {1,2},
                {10, 11};
            }
        ```
    - 3 Dimensi
        Matrix 2x2 sebanyak 2
        ```c
            int matrix [2][2][2] = {
                {
                    {1,2},
                    {3, 4}
                },
                {
                    {5, 6},
                    {7, 8}
                }
            }
        ```

> Main Course
- [ ] Pointer
    Variabel yang menunjuk variabel yang lain
    ```Ada maling masuk rumah. Maling tau alamatnya, maka maling bisa melakukan apapun di dalam rumah.```
    ```c
        tipeData *variabelPtr = &variabelYangDitunjuk;
        int rumah = 1000;
        int *maling = &rumah;
        //* = asterisk, pointer
        // & = ampersand, alamat
    ```

    - Pointer variabel
        Nunjuk ke suatu variabel, dan kita bisa mengakses nilainya melalui alamat variabel
        ```c
            int a = 10;
            int *ptr = &a;
            //*ptr =  10
            //ptr = alamat a
            //&ptr = alamat *ptr

            // Segala perubahan di *ptr maupun a, akan berdampak. Karena mereka alamatnya sama
        ```
        **Pointer variabel (\*ptr) hanya menerima alamat variabel biasa**
    - Pointer to Pointer
        Pointer yang menyimpan nilai pointer
        ```c
            int a = 10;
            int *ptr = &a;
            int *ptr2 = ptr;
            // Sederajat, karena *pointer hanya menerima alamat variabel biasa, maka inisiasi *ptr2 adalah alamat yang ditunjuk oleh *ptr
        ```
    - Double Pointer
        Pointer yang menyimpan alamat pointer
        ```c
            int a = 10;
            int b = 12;
            int *ptr = &a;
            //Ubah nilai a lewat *ptr
            *ptr = 20; //a menjadi 20
            ptr = &b; //*ptr pindah nunjuk ke b
            int **pointer = &ptr;
            //Ubah nilai b lewat  **pointer
            **pointer = 15;
            //Ubah nilai *ptr lewat **pointer
            *pointer = &a;
            //Nilai **pointer
            printf("%p", pointer);
        ```
> Next Session