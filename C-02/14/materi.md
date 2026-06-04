# C-02: Session 14
> Review
- [x] Function
    ```c
        TipeData namaFungsi (parameter) {
            sintaks fungsi;
            return;
        }
    ```
    Fungsi matematika: `f(x) = 12x + 5`
    Fungsi pemrograman: 
    ```c
        int f(x) {
            return 12*x + 5;
        }
    ```
- [x] Jenis-jenis function
    - Dengan nilai return
        ```c
            return value;
        ```
        Mengembalikan nilai dari dalam fungsi ke yang memanggil
    - Tanpa nilai return
        ```c
            void namaFungsi(parameter) {

            }
        ```
        Tidak mengembalikan suatu nilai
- [x] Parameter
    - Pass by value
        ```c
            int a = 12;
            int b = 10;
            int tambah(int a, int b) {
                return a + b;
            }
            tambah(a, b);
        ```
        Melempar suatu nilai dari variabel / langsung ke parameter
    - Pass by reference
        ```c
            int a = 12;
            int b = 10;
            void swap(int *a, int *b) {
                int temp = *a;
                *a = *b;
                *b = temp;
                /*
                a = b;
                b = a;
                12 10
                a  b
                a = b; (a = 10, b = 10)
                b = a; (b = 10, a = 10)
                */
            }
            swap(&a, &b);
        ```
        Melempar alamat ke dalam parameter, sehingga bisa mengakses nilai dan memodifikasi alamatnya.
- [x] Prototyping
    ```c
        //Deklarasi fungsi fungsi
        int tambah(int, int);
        int kurang(int, int);
        void print();
        int main() {

        }

    ```
> Main Course

> Next Session