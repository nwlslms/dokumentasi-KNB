# ALG-01: Session 4

> Review
- [x] Data Types
    - Integer
        ```c
        short a;
        int b = 12;
        long c = 14;
        long long d = 15;
        ```
    - Float
        ```c
        float a = 3.14; //1234.56789
        double b; // 16-18 digit
        ```
    - Characters
        ```c
        char c = 'A'; // 65
        char str[6] = "BINUS\0";
        ```

- [x] Input
    - Buffer
        ```text
        BINUS
        OK
        \n, \0, \r
        ```
        |0|1|2|3|4|5|6|7|
        |:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
        |B|I|N|U|S|\n|O|K|
        ```cpp
        scanf(" %s", BINUS);
        scanf(" %s", OK);

        // Input String
        // ^
        scanf("%[^\n]", str);
        ```

- [x] Output
    `printf("%[flags][width][.presisi]type");`
    - Flags
        `-`: Rata kiri
        `+`: Nampilin +/- untuk bilangan, rata kanan untuk string
        ``: Rata kanan.
    - Width
        Kolom output ada berapa.
    - Presisi
        Berapa digit / karakter yang ingin ditampilkan.

> Main Course
- [x] Swap
    Before:
    |A|B|
    |:-:|:-:|
    |12|30|

    Process:
    A = B
    |A|B|
    |:-:|:-:|
    |30|30|

    B = A
    |A|B|
    |:-:|:-:|
    |30|30|

    ---
    temp = A
    |A|B|temp|
    |:-:|:-:|:-:|
    |12|30|12|

    A = B
    |A|B|temp|
    |:-:|:-:|:-:|
    |30|30|12|

    B = temp
    |A|B|temp|
    |:-:|:-:|:-:|
    |30|12|12|

    After
    |A|B|
    |:-:|:-:|
    |30|12|

- [ ] Konversi
    - Typecasting
        ```cpp
        TipeData awal;
        TipeData akhir = (TipeData)awal;
        ```
> Next Session
