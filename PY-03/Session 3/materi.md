# PY-03: Session 3

> Review
- [x] Input
    - `input("Text yang ditampilkan sebelum input)`
        Input berupa `str`
        - Typecasting
            Merubah suatu data ke bentuk lain.
            ```py
                umur
                umur = input("Masukkan umur")
                # Typecasting
                umur = int(umur)
            ```

- [x] Output
    - Output format
        ```py
            # Umur kamu adalah 19
            umur = 19
            print(f"Umur kamu adalah {umur}")
        ```
    - Output `%`
        ```py
            umur = 19
            print("Umur kamu adalah %d" % umur)
        ```

- [x] Data Types
    |Nama|Fungsi|Lambang|
    |:-:|:-:|:-:|
    |str|Menampung data karakter|%s|
    |int|Bilangan bulat|%d|
    |float|Bilangan desimal|%f|
    |bool|Logika|-|
---
> Main Course
- [x] Operator
    - Aritmatika
        |Fungsi|Operator|Contoh|
        |:-|:-:|:-:|
        |Tambah|`+`|hasil = a + b|
        |Kurang|`-`|hasil = a - b|
        |Kali|`*`|hasil = a * b|
        |Pembagian (float)|`/`|hasil = 5 / 2 == 2.5|
        |Pembagian (int)|`//`|hasil = 5 // 2 == 2|
        |Modulo|%|hasil = 5 % 2 == 1|
        |Pangkat|**|hasil = a ** b|
    - Assignment (Penugasan)
        `a assignment b`
        Segala yang ada di `b`, akan dilakukan untuk di assign terhadap `a`
        `a = a + b`
        |Fungsi|Operator|Contoh|
        |:-|:-:|:-:|
        |Assignment|`=`|hasil `=` a + b|
        |Tambah|`+=`|hasil += a + b|
        |Kurang|`-=`|hasil -= b|
        |Kali|`*=`|hasil *= a|
        |Pembagian (float)|`/=`|hasil /= 5|
        |Pembagian (int)|`//=`|hasil //= 2|
        |Pangkat|`**=`|hasil **= b|
    - Relasional (Komparasi)
        Return dari operator relasinal adalah `True` or `False`, `1` or `0`.
        |Fungsi|Operator|Contoh|
        |:-|:-:|:-:|
        |Kurang dari|`<`|a < b|
        |Kurang dari sama dengan|`<=`|a <= b|
        |Lebih dari|`>`|a > b|
        |Lebih dari sama dengan|`>=`|a >= b|
        |Sama dengan|`==` or `is`| a == b or a is b|
        |Bukan sama dengan|`!=` or `is not`|a != b or a is not b|
    - Logic (Logika)
        Return dari operator logika adalah `True` or `False`, `1` or `0`.
        |Fungsi|Operator|Contoh|Rumus|
        |:-|:-:|:-:|:-:|
        |And|`and`|1 and 1|Satu salah, semua salah|
        |Or|`or`|1 or 0|Satu benar, semua benar|
        |Not|`not`|not 1|Membalik nilai kebenaran|

- [x] If-condition
    Struktur kontrol program
    - if
        ```py
            if SYARAT:
                statement
        ```
    - if-else
        ```py
            if SYARAT:
                statement
            else:
                statement 2
        ```
    - if-elif n- else
        ```py
            if SYARAT:
                statement 1
            elif SYARAT 2:
                statement 2
            elif SYARAT n:
                statement n
            else
        ```
    - Nested if
        If yang bersarang
        ```py
            if SYARAT:
                if SYARAT:
                    statement 1-1
                elif SYARAT:
                    statement 1-2
            else:
                if SYARAT:
                    statement 2-1
                else SYARAT:
                    statement 2-2
        ```
> Next Session
> Loop