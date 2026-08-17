# ALG-01: Session 3

> Review
- [x] Variabel
    Tempat untuk menyimpan data
    - Bilangan bulat
        ```c
        short a;
        int b;
        long c;
        long long d;
        ```
    - Bilangan desimal
        ```c
        float a;
        double b;
        ```
    - Karakter
        ```c
        char a; // Menyimpan 1 karakter
        char str[n];
        ```
    
    ```c
    TipeData namaVariabel;
    // Deklarasi
    int jumlahRumah;

    // Pakai
    jumlahRumah = 10;

    // Camel text
    int rumahnyaSiNawwal;

    // Psikopat
    int _rumah;
    ```

- [x] Output
    ```c
    printf("Text Yang Ditampilkan", variabelYangDipakai);

    // Hello World
    printf("Hello World!");
    ```

- [x] Input
    ```c
    scanf("Input user", Alamat variabel penampung);

    short roti;
    scanf("%hd", &roti);
    ```

> Main Course
- [x] Tipe Data
    - Bilangan bulat
        |Type|Ukuran (byte)|Range|Format|
        |:-:|:-:|:-:|:-:|
        |short|2|-32768 s/d 32767|%hd|
        |int|4|-2147483648 s/d 2147438647|%d|
        |long|4/8|-2147483648 s/d 2147438647 / -9.223.372.036.854.775.808 s/d 9.223.372.036.854.775.807|%ld|
        |long long|8|-9.223.372.036.854.775.808 s/d 9.223.372.036.854.775.807|%lld|
        |unsigned|Menyesuaikan|0 s/d Positif * 2|%hu, %u, %lu, %llu|
    - Bilangan desimal
        |Type|Ukuran (byte)|Range|Format|
        |:-:|:-:|:-:|:-:|
        |float|4|8-9 Digit|%f|
        |double|8|16-18 Digit|%lf|

    - Karakter
        |Type|Ukuran (byte)|Range|Format|
        |:-:|:-:|:-:|:-:|
        |char|1|-128 s/d 127|%c|
        |char [n]|n|-128 s/d 127|%s|

    - Variable
        - Deklarasi & Pemakaian
            ```c
            int a;
            int b;
            int c;
            int a, b, c;

            int a = 10;
            int b = 12;
            int c = 15;
            int a = 10, b = 12, c = 15;

            a = 12;
            ```

- [x] Output
    `%[flags][width][.presisi]type`
    - Flags
        - Bilangan
            |Flags|Fungsi|
            |:-:|:-:|
            |`+`|Nampilin -/+|
            |`-`|Rata kiri|
            |`Kosong`|Rata kanan|
        - Karakter
            |Flags|Fungsi|
            |:-:|:-:|
            |`+`|Rata kanan|
            |`-`|Rata kiri|
            |`Kosong`|Rata kanan|
    - Width
        Kolom paragraf
    - .presisi
        Kolom digit
    - type
        Format tipe data
- [ ] Input
    `JAM:MENIT:DETIK`
    - Buffer
        Input: ANJAY
        |0|1|2|3|4|5|
        |:-:|:-:|:-:|:-:|:-:|:-:|
        |A|N|J|A|Y|\n|
> Next Session