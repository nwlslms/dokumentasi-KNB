# C-02: Session 18

> Review
- [x] Pointer
    Variabel yang menunjuk ke alamat variabel lain.
    - Pointer variabel
        ```c
            int a = 10;
            int *ptr = &a;

            // Alamat a
            printf("%p", ptr);

            // Nilai a
            printf("%d", *ptr);

            // Alamat ptr
            printf("%p", &ptr);
        ```
    - Pointer to pointer
        ```c
            int a = 12;
            int *ptr1 = &a;
            // ptr1 -> a

            // Alamat a
            printf("%p", ptr1);

            // Nilai a
            printf("%d", *ptr1);

            // Alamat ptr
            printf("%p", &ptr1);

            int *ptr2 = ptr1;
            // ptr2 -> a

            // Alamat a
            printf("%p", ptr2);

            // Nilai a
            printf("%d", *ptr2);

            // Alamat ptr
            printf("%p", &ptr2);
        ```
    - Double Pointer
        ```c
            int a = 12;
            int *ptr1 = &a;
            // ptr1 -> a

            // Alamat a
            printf("%p", ptr1);

            // Nilai a
            printf("%d", *ptr1);

            // Alamat ptr
            printf("%p", &ptr1);

            int **ptr2 = &ptr1;

            // Nilai a
            printf("%d", **ptr2);

            // Alamat a
            printf("%p", *ptr2);

            // Alamat ptr1
            printf("%p", ptr2);

            // Alamat ptr2
            printf("%p", &ptr2);
            **ptr2 = 10;

            int b = 15;
            *ptr2 = &b;
            
            int *ptr3 = &b;
            ptr2 = &ptr3;

            void swap(int **a, int **b) {
                int temp = **a;
                **a = **b;
                **b = temp;
            }

            void fungsi (int *a, int *b) {
                if (*a % 2 == 0) {
                    swap(&a, &b);
                }
            }
            c = 100;
            d = 200;
            fungsi(&c, &d);
            /*
                fungsi
                    a = c
                    b = d
                    
                    swap
                        int **a = &a (fungsi)
                            *a (fungsi) = &c
                        a = &a (fungsi)
                        *a = nilai yang disimpan di *a (fungsi) = &c
                        **a = nilai c
            */
        ```
- [x] Pointer dan Array
    1. Pointer adalah arrray
    2. Perilaku mereka sama
    ```c 
        int arr[5] = {1, 2, 3, 4, 5};
        arr[0];
        printf("%d", arr);
    ```

- [ ] Struct dan Pointer
    - Struct
        ```c
            typedef struct {
                int bilangan;
                char kar;
            } Baru;

            Baru namaVariabel;
            namaVariabel.bilangan = 10;

            Baru array[5];
            array[0].bilangan = 12;
            array[0].kar = 'B';

            array[4].bilangan = 222;
            array[4].kar = 'K';

            Baru *arr = (Baru*)malloc(sizeof(Baru) * 3);
            arr[2].bilangan = 333;
        ```
    
    - Pointer
        - Operator
            1. `.`: Variabel struct tidak terwakilkan (tunggal).
            2. `->`: Variabel struct yang terwakilkan.

        - Pointer
            ```c
                // Pointer to variabel
                Baru a = {12, 'C'};
                Baru *ptr = &a;
                printf("%d", ptr->bilangan);
                printf("%d", (*ptr).bilangan);
                ptr->bilangan = 10;
                (*ptr).bilangan = 100;

                // Pointer to array
                Baru arr[5];
                Baru *ptr2 = arr; // Baru *ptr2 = &arr[0];
                // Indeks ke-2
                printf("%d", (ptr2+2)->bilangan);
                printf("%d", ptr2[2].bilangan);
            ```
        - Pointer to Pointer
            ```c
                Baru a;
                Baru *ptr1 = &a;
                Baru *ptr2 = ptr1;
                ptr2->bilangan = 12;
                (*ptr).bilangan = 10;
                
            ```
        - Double Pointer
            ```c
                
            ```

> Next Session
> Projek