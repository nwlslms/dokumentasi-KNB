# C-02: Session 12
> Review
- [x] Pointer
    Variabel yang menunjuk ke variabel yang lain
    ```c
        int a = 10;
        int *ptr = &a;
        // Akses nilai yang ditunjuk
        printf("%d", *ptr);
    ```
> Main Course
- [x] Function
    ```aritmatika(x, y): 12x - 12y```
    `aritmatika`: Nama fungsi
    `(x, y)`: Parameter
    `12x - 12y`: Statement fungsi
    `return`: Nilai balik
    ```c
        TipeData NamaFungsi(Parameter) {
            Statement Fungsi
        }
        int tambah(int a, int b) {
            return a + b;
        }
        printf("%d", tambah(10, 12));
    ```
    - Jenis
        - Dengan return value
            ```c
                #include <stdio.h>
                int tambah (int a, int b) {
                    return a + b;
                }
                int kurang (int a, int b) {
                    return a - b;
                }
                int main () {
                    int a = 10;
                    int b = 12;
                    // int hasil = a + b;
                    int hasil = tambah(a, b);
                    return 0;
                }
            ```
        - Tanpa return value
            `void`: Tipe data kosong
            ```c
                #include <stdio.h>
                #include <stdlib.h>
                #include <string.h>

                void main_menu(){
                    while(1) {
                        printf("Hello, Masukkan perintah: ");
                        char command[21];
                        scanf(" %[^\n]", command);
                        printf("Command: %s\n", command);
                        system("PAUSE");
                        if(strcmp(command, "QUIT") == 0) {
                            printf("Babay!\n");
                            return;
                        }
                    }
                }

                int main () {
                    main_menu();
                }
            ```
    - Parameter
        - Pass by value
            Melempar nilai suatu variabel ke dalam fungsi
        - Pass by reference
            Melempar alamat suatu variabel ke dalam fungsi
    - Prototyping
        Mendeklarasikan fungsi mentah
    - Rekursif
        Fungsi yang memanggil fungsi itu sendiri
        ```c
            TipeData namaFungsi(Parameter) {
                Base case

                Rekursif case
            }
            long long int faktorial(int n) {
                if (n == 0 || n == 1) {
                    return 1;
                }
                return n * faktorial(n - 1);
            }
            1: 10 * faktorial(10 - 1);
            2: 10 * 9 * faktorial(9 -1);
            ...
            10: 10 * 9 * 8 * 7 * 6 * 5 * 3 * 2 * faktorial(2 - 1);
            11: return 10 * 9 * 8 * 7 * 6 * 5 * 3 * 2 * 1;
        ```
> Next Session
Function: Rekursif, Intuitif Parameter