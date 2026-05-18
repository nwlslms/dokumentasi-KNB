# C-02: Session 13

> Review
- [x] Function
    Struktur sistem yang terbungkus.
    ```c
        TipeData namaFungsi(Parameter) {
            Badan Fungsi
        }
        int tambah (int a, int b) {
            return a + b;
        }
    ```
    - Parameter
        Nilai yang dimasukkan  ke dalam fungsi untuk digunakan saat fungsi berjalan.
    - Return
        - Dengan return
            Mengembalikkan suatu nilai ke yang manggil fungsinya.
            ```c
                int tambah (int a, int b) {
                    return a + b;
                }

                int main () {
                    int a = tambah(10, 12);
                    return 0;
                }
            ```
        - Tanpa return
            `void`: Tipe data kosong
            ```c
                void sapa() {
                    printf("Hello World\n");
                    return;
                }
            ```
> Main Course
- [x] Parameter
    - Pass by value
        Parameter hanya mengambil nilai saat parameter diisi.
    - Pass by reference
        Parameter menerima alamat dari suatu variabel.
    - Pass by reference dan Global Variabel
- [x] Prototyping
    Deklarasi fungsi mentah.
- [x] Rekursif
    Fungsi yang memanggil dia sendiri
    `Base case`: Kasus yang membuat fungsi berhenti.
    `Recursive case`: Rumus atau pemanggilan fungsinya.
    > Faktorial
        n!: n * n-1 * n-2 * ... * 1
        1. return 10 * faktorial(9);
        2. return 9 * faktorial(8);
        3. return 8 * faktorial(7);
        4. return 7 * faktorial(6);
        5. return 6 * faktorial(5);
        6. return 5 * faktorial(4);
        7. return 4 * faktorial(3);
        8. return 3 * faktorial(2);
        10. return 2 * faktorial(1);
        11. return 1;
    > Pangkat
        x^e: x * x <=> Sebanyak e
        1. return 3 * pangkat(3, 2);
        2. return 3 * pangkat(3, 1);
        3. return 3 * pangkat(3, 0);
        4. return 1;
> Next Session