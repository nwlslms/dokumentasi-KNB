# CPP-02: Session 2
----------------------

> Review
- [x] Dasar
    - Struktur program
        ```cpp
            // Include
            #include <iostream>

            int main () {
                cout << "Hello World" << endl;
                return 0;
            }
        ```
    - Istilah
        - Input: Memasukkan sesuatu ke dalam program
        - Output: Menampilkan dari program
        - Variabel: Untuk menampung data input

> Main Course
- [x] Input
    `cin`: Fungsi untuk input
    Segala input, ditampung di sebuah variabel.
    `getline(cin, variabel)`: Untuk input string termasuk spasi
    Buffer:
    |0|1|2|3|4|5|6|
    |-|-|-|-|-|-|-|
    |19|\n|N|a|w|w|a|

    |0|1|2|3|4|5|6|
    |-|-|-|-|-|-|-|
    |19|N|a|w|w|a|l|

    `cin.ignore()`: Menghapus karakter terakhir di buffer.
- [x] Output
    - `cout`: Untuk menampilkan output program
    - Format output:
        - `endl`: Newline
        - `setw(n)`: Mengatur lebar kolom output
        - `setprecision(n)`: Nampilin berapa angka di belakang koma
        - 'fixed` & `scientific`: Bilangan koma, dan notasi ilmiah
        - Karakter backline `\`
            - `\n`: Newline
            - `\t`: Tab
- [x] Tipe Data
    - Bilangan bulat
        |Jenis|Ukuran|Rentang|Contoh|
        |:-:|:-:|:-:|:-:|
        |short|2 byte|-32768 s/d 32767|Jumlah rumah di perumahan, Jumlah kepala keluarga, Nilai matkul|
        |int|4 byte|-2147483648 s/d 2147483647| Hasil faktorial, pangkat, kalkulator|
        |long|4 (32 bit) / 8 (64 bit)|sama dengan int / -9,223,372,036,854,775,808 sd / 9,223,372,036,854,775,807|Faktorial, kalkulator, astronomis|
        |long long|8 byte|-9,223,372,036,854,775,808 sd / 9,223,372,036,854,775,807|Faktorial, kalkulator
    - Bilangan desimal
        |Jenis|Ukuran|Rentang|Presisi|Contoh|
        |:-:|:-:|:-:|:-:|:-:|
        |float|4 byte|$1,2 \cdot 10^{-38}$ sd $3.4 \cdot 10^{38}$|7 digit|Perhitungan dasar|
        |double|8 byte|$2.3 \cdot 10^{-308}$ s/d $1.7 \cdot 10^{308}$|15 digit|Sudut yang sangat presisi|
        |long double|10-16 byte|> double|18-20 digit|Sudut yang presisi|
    - Huruf
        |Jenis|Ukuran|Contoh|Rentang|
        |:-:|:-:|:-:|:-:|
        |string|1 * jumlahHuruf|Nama|ASCII Kode|
        |char|1|Karakter|ASCII Kode|
    - Logika
        |Jenis|Ukuran|Contoh|Rentang|
        |:-:|:-:|:-:|:-:|
        |bool|2 byte|Pernyataan (benar/salah)|`True` or `False` `1` or `0`|
> Next Session
> Variabel, penggunaan tipe data, program console pertama.