# CPP-03: Session 4

> Review
- [x] Input
    ```cpp
        int a, b, c;
        cin >> a >> b >> c;
    ```
- [x] Operator aritmatika
    ```cpp
        hasil = totalBarang * harga;
    ```
---
> Main Course
- [x] Operator
    - Aritmatika (Perhitungan)
        |Fungsi|Operator|Contoh|
        |:-|:-:|:-:|
        |Tambah|`+`|hasil = a + b;|
        |Kurang|`-`|hasil = a - b;|
        |Kali|`*`|hasil = a * b;|
        |Bagi|`/`|hasil = a / b;|
        |Modulo|`%`|hasil a % b;|
        - Modulo
            Sisa yang tidak bisa dibagi.
            $12 / 5 = 2 <=> 5 * 2 = 10$
            $12 \% 5 = 2$
        - Typecasting
            Mengubah suatu tipe data ke bentuk yang lain.
            ```cpp
                tipeData(variabel);
                float(a); //10.00

                variabel = Value;
                TipeDataBaru variabelBaru = TipeDataBaru(variabel);
                int a = 10;
                float b = float(a);
            ```
        - Aturan Notasi
            Seperti notasi matematika.
            $f(x) = \frac{2x + 1}{x - 1}$
            ```cpp
                hasil = ((2*x) + 1)  / (x-1);
            ```

    - Assignment (Penugasan)
        `a += b <=> a = a + b`
        ```cpp
            int a = 10, b = 12, hasil = 7;
            hasil += a + b; // hasil = hasil + (a + b);
            cout << hasil;

            hasil *= (a - b) * b * (a - 3);
            // hasil * (a - b) * b * (a - 3) SALAH
            // hasil * ((a-b) * b * (a - 3))
        ```
        |Fungsi|Operator|Contoh|
        |:-|:-:|:-:|
        |Assignment|`=`|hasil = a + b|
        |Tambah|`+=`|hasil += a|
        |Kurang|`-=`|hasil -= a + b|
        |Kali|`*=`|hasil *= a|
        |Bagi|`/=`|hasil /= a|
        |Modulo|`%=`|hasil %= 2|

    - Relasional (Komparasi)
        Return value berupa `True` or `False` atau `1` or `0`.
        |Fungsi|Operator|Contoh|
        |:-|:-:|:-:|
        |Kurang dari|`<`|a < b|
        |Kurang dari sama dengan|`<=`|a <= b|
        |Lebih dari|`>`|a > b|
        |Lebih dari sama dengan|`>=`|a >= b|
        |Sama dengan|`==`|a == b|
        |Tidak sama dengan|`!=`|a != b|

    - Logika
        Return value berupa `True` or `False` atau `1` or `0`.
        |Fungsi|Operator|Contoh|Syarat|
        |:-|:-:|:-:|:-:|
        |AND|`&&`|1 && 0|Salah satu, maka salah|
        |OR | $\|\|$|1$\|\|$1|Benar satu, maka benar|
        |not|`!`|!1|Memutar nilai kebenaran|
    
    - Increment dan Decrement
        - Increment
            `variabel += 1 <=> variabel = variabel + 1 <=> variabel++`
            ```cpp
                //Post-Increment
                int i = 0;
                cout << i++; // 0
                cout << i++; // 1
                cout << i; // 2
                //Pre-Increment
                int i = 0;
                cout << ++i; // 1
                cout << ++i; // 2
                cout << i; // 2
            ```
        - Decrement
            `variabel -= 1 <=> variabel = variabel - 1 <=> variabel--`
            ```cpp
                //Post-Increment
                int i = 3;
                cout << i--; // 3
                cout << i--; // 2
                cout << i; // 1
                //Pre-Increment
                int i = 3;
                cout << --i; // 2
                cout << --i; // 1
                cout << i; // 1
            ```
- [x] If-Condition
    Struktur kontrol program.
    - If
        - if
            ```cpp
                if (SYARAT) {
                    STATEMENT
                }
            ```
        - if - else
            ```cpp
                if (SYARAT) {
                    STATEMENT 1
                } else {
                    STATEMENT 2
                }
            ```
        - if - else if n - else
            ```cpp
                if(SYARAT 1) {
                    STATEMENT 1
                } else if (SYARAT 2) {
                    STATEMENT 2
                } else if (SYARAT n) {
                    SATEMENT n
                } else {
                    STATEMENT else
                }
            ```
        - Nested if
            If di dalam if.
    - Switch

> Next Session
> For, continue, break, while, do-while;