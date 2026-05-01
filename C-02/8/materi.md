# C-02: Session 8
> Review
- [x] Address & Pointer
    Address = `&` untuk mengetahui alamat memori dari suatu variabel
    Pointer = `*` untuk menandakan variabel berupa pointer
- [x] Pointer
    Pointer = variabel yang menunjuk ke variabel lain
    - Pointer
        ```c
            int a = 10;
            int *ptr = &a;
            *ptr = 12;
        ```
    - Pointer to pointer
        Pointer yang menunjuk ke variabel pointer lainnya
        ```c
            int a = 10;
            int *ptr1 = &a;
            int *ptr2 = ptr1;
            //ptr2 -> a
        ```
    - Double pointer
        Pointer yang menunjuk ke variabel pointer
        ```c
            int a= 10;
            int *ptr1 = &a;
            int **pointer = &ptr1;
        ```
> Main Course
- [x] Pointer dan Array
    Array adalah pointer yang menunjuk ke indeks pertama.
    ```c
        int arr[5] = {1, 2, 3, 4, 5};
        //Akses array pakai index arr[0], arr[i], arr[n]
        for (int i = 0; i < 5;i++) {
            printf("%d %p\n", arr[i], &arr[i]);
        }
        //Akses array pakai pointer
        printf("==============================\n");
        for (int i = 0; i < 5; i++) {
            printf("%d %p\n", *(arr+i), (arr+i));
            //*(arr + i) == *ptr
            //(arr + i) == ptr
        }
        printf("%d %p\n", *arr, arr);
    ```
    Pointer sama dengan array
    ```c
        int a = 10;
        int *ptr1 = &a;
        printf("%d %p\n", ptr1[0], &ptr1[0]);
        //ptr[n] == *ptr
        //&ptr[n] == ptr
    ```
- [x] Array
    - Statis
        Konstan, diam
        Komputer: Didefinisikan di awal, tetap
        ```c
            int array[100];
        ```
    - Dinamis
        Berubah-ubah, bergerak
        Komputer: Didefinisikan di akhir, berubah-ubah
        ```c
            //Alur
            scanf("%d", &n);
            int array[n];
        ```
        `stdlib.h`
        - `malloc(TotalMemory)`: Mengalokasikan memori di komputer
        - `sizeof(tipeData)`: Mengetahui besar memori dari suatu tipe data
        - `free(variabel)`: Membebaskan memori variabel tersebut
        ```c
            #include <stdio.h>
            #include <stdlib.h>

            int main () {
                // int max;
                // scanf("%d", &max);
                // int arr[max];
                // for (int i = 0; i < max; i++) {
                //     scanf("%d", &arr[i]);
                // }
                // for(int i = 0; i< max+3; i++) {
                //     printf("%d ", arr[i]);
                // }
                int max;
                scanf("%d", &max);
                int *array = (int*)malloc(sizeof(int) * max);
                for(int i = 0; i < max; i++) {
                    scanf("%d", &array[i]);
                }
                free(array);
                return 0;
            }
        ```
> Next Session
Pointer dan array