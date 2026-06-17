# PY-03: Session 4

> Review
- [x] Operator
    - Aritmatika (Perhitungan matematika dasar)
        `+`, `-`, `*`, `/`, `//`, `%`, `**`
    - Assignment (Penugasan terhadap variabel)
        `=`, `+=`, `-=`, `*=`, `/=`, `//=`, `%=`, `**=`
    - Relasional (Perbandingan dua nilai)
        Return sebuah nilai `True` or `False` atau `1` or `0`
        `>`, `>=`, `<`, `<=`, `==` or `is`, `!=` or `is not`
    - Logika (Nilai kebenaran suatu statement)
        `and`, `or` dan `not`

- [x] If condition
    Struktor kontrol program
    - if
        ```py
            if SYARAT:
                eksekusi
        ```
    - if-else
        ```py
            if SYARAT:
                eksekusi
            else:
                eksekusi
        ```
    - if-elif n-else
        ```py
            if SYARAT1:
                eksekusi 1
            elif SYARAT2:
                eksekusi 2
            elif SYARATn:
                eksekusi n
            else:
                eksekusi
        ```
    - Nested if
        if di dalam if
---

> Main Course
- [ ] Looping
    Struktur pengulangan di dalam program.
    - Iterasi
        Perulangan ke-i
        ```
        Iterasi ke-1
        Baca

        Iterasi ke-2
        Baca

        Iterasi ke-3
        Baca
        ```
    - `for`
        ```py
            for variabel in range(x, y, z):
                statement
        ```
        - variabel: Penanda kita ada di iterasi keberapa
        - `range(y)`: Menghasilkan rentang dari 0-(y-1)
            range(10): 0-9
        - `range(x, y)`: Menghasilkan rentang dari x-(y-1)
            range(1, 10): 0-9
        - `range(x, y, z)`: Menghasilkan rentang dari x-(y-1), dengan jarak z.
            range(1, 10, 2): 1, 3, 5, 7, 9

        ```py
            for i in range(x):
                print(i)
            # Iterasi - 0
            print(0)
            # Iterasi - 1
            print(1)
            # Iterasi - (x-1)
            print(99)
        ```
    - `while`
        ```py
            variabelIterasi = x
            while variabelIterasi < y:
                lakukan
                variabelIterasi += z
        ```
    - Nested loop
        ```
        *
        **
        ***
        ****
        *****
        ```
---
> Next Session
> Review

# ASSIGNMENT
```py
    baris = 5
    *
    * *
    * * *
    * * * *
    * * * * *

    * * * * *
      * * * *
        * * *
          * *
            *
    
            *
          * *
        * * *
      * * * *
    * * * * *

    * * * * *
    * * * *
    * * * 
    * *
    *

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
```