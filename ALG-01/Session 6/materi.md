# ALG-01: Session 6
> Review
- NULL

> Main Course
- [x] Operator
    - Aritmatika
        |Operator|Fungsi|Cara pakai|Notes|
        |:-:|:-:|:-:|:-|
        |`+`|Menambahkan suatu variabel|a + b||
        |`-`|Mengurangi suatu variabel|a - b||
        |`/`|Membagi suatu variabel|a / b|int = `7 / 3 = 2` float = `5 / 2.0 = 2.5`|
        |`*`|Mengalikan suatu variabel|a * b||
        |`%`|Siisa bagi dari pembagian|10 % 3|`10 % 3 = 1` or `19 % 7 = 5`|
    - Penugasan
        ```cpp
        // int a = 10;
        // x = x + y;
        // a = a + 10 * 5 + 7; 67
        // a += 10 * 5 + 7
        ```
        |Operator|Fungsi|Cara pakai|Notes|
        |:-:|:-:|:-:|:-|
        |`=`|Assign suatu variabel untuk menyimpan nilai| `int a = 10`||
        |`+=`|Assign suatu variabel dengan hasil jumlah|`a = a + 10` => `a += 10`||
        |`-=`|Assign suatu variabel dengan hasil pengurangan|`a = a - 10` => `a -= 10`||
        |`*=`|Assign suatu variabel dengan hasil perkalian|`a = a * 10` => `a *= 10`||
        |`/=`|Assign suatu variabel dengan hasil pembagian|`a = a / 10` =? `a /= 10`||
        |`%=`|Assign suatu variabel dengan hasil modulo|`a = a % 10` => `a %= 10`||
    - Relasional
        |Operator|Fungsi|Cara pakai|Notes|
        |:-:|:-:|:-:|:-|
        |`>`|Membandingkan 2 nilai|`12 > 10 = 1`||
        |`>=`|Membandingkan 2 nilai|`10 >= 10 = 1`||
        |`<=`|Membandingkan 2 nilai|`9 <= 5 = 0`||
        |`<`|Membandingkan 2 nilai|`3 < 10 = 1`||
        |`==`|Membandingkan 2 nilai|`9 == 10 = 0`||
        |`!=`|Membandingkan 2 nilai|`10 != 5 = 1`||
    - Logika
        - Tabel OR
            Salah satu nilainya benar, maka benar.
            ```txt
            (10 > 13) OR (11 == 13) = 0 OR 0 = 0
            (10 < 13) OR (11 == 13) = 1 OR 0 = 1

            (SUDAH MAKAN) OR (SUDAH MINUM)
            ```
            |A|B|`A OR B`|
            |:-:|:-:|:-:|
            |1|1|1|
            |1|0|1|
            |0|1|1|
            |0|0|0|

        - Tabel AND
            Salah satu, salah semua
            ```txt
            (SUDAH MAKAN) AND (SUDAH MINUM)
            ```
            |A|B|`A AND B`|
            |:-:|:-:|:-:|
            |1|1|1|
            |1|0|0|
            |0|1|0|
            |0|0|0|

        - Tabel NOT
            Membalik nilai kebenaran
            |A|!A|
            |:-:|:-:|
            |1|0|
            |0|1|

        ```txt
        ((FLAZZ CARD) AND (OUTFIT)) OR ((ALAT TULIS) OR (LANYARD))
        ```
    - Bitwise
        |7|6|5|4|3|2|1|0|
        |:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
        |0|0|0|0|0|0|0|0|
        - Operator
            ```txt
            101
            001
            ---&
            001 = 1

            101
            001
            ---|
            101 = 5

            101
            ---~
            010 = 2

            101
            001
            ---^
            100 = 4

            101
            ---<< 1
            1010 = 10

            101
            -->>1
            10 = 2
            ```

            |Operator|Fungsi|Contoh|
            |:-:|:-:|:-:|
            |`&`|Menghasilkan nilai AND dari 2 biner|`x = 5 & 1`|
            |$ \|$|Menghasilkan nilai OR dari 2 biner|$ x = 5 \| 1 = 5$|
            |`~`|Membalik biner|~5 = 2|
            |`^`|Cari yang beda|`x = 5 ^ 1`|
            |`<<`|Menggeser bit ke kiri|`x = 5 << 1`|
            |`>>`|Menggeser bit ke kanan|`x = 5 >> 1`|
> Next Session
- [ ] Control Program