# PY-03: Session 2
--------------------
> Review
- TIDAK ADA
> Main Course
- [x] Output
    `Output`: Proses menampilkan sesuatu dari program
    `print("text")`
    - Output format
        ```python
            print("=== BIODATA ===")
            print(f"Nama: {nama}")
            print(f"Umur: {umur}")
            print(f"Status: {status}")
        ```
    - Output `,`, `+`, dan `%`
        - `,`
            Otomatis menambahkan spasi sebelum text berikutnya
        ```py
            print("=== BIODATA ===")
            print("Nama:", nama)
            print("Umur:", umur)
            print("Status:", status)

            print("Nawwal", "Salim")
        ```
        - `+`
            Hanya berlaku untuk variabel jenis `str`. Tanpa spasi.
        ```py
            print("=== BIODATA ===")
            print("Nama: " + nama)
            print("Umur:",  umur)
            print("Status: " + status)

            print("Nasib" + "Bangkit")
        ```
        - `%`
            |%|Tipe Data|
            |:-:|:-:|
            |%d|`int`|
            |%f|`float`|
            |%s|`str`|
        ```py
            print("=== BIODATA ===")
            print("Nama: %s" % (nama))
            print("Umur: %s" % (umur))
            print("Status: %s" % (status))
        ```
    - Karakter `\`
        - `\n`
            Baris baru
        ```py
        print("=== BIODATA ===")
        print("Nama: %s\nUmur: %s\nStatus: %s" % (nama, umur, status))
        ```
        - `\t`
            Kasih karakter tab
        ```py
            print("=== BIODATA ===")
            print("Nama\t: %s\nUmur\t: %d\nStatus\t: %s" % (nama, umur, status))
        ```
- [x] Input
    `variabel = input("Text")`
    Fungsi `input()`, selalu menghasilkan `str`.
    - Typecasting: Merubah dari suatu tipe data ke tipe data lainnya:
        ```python
            variabelYangLama = tipeDataBaru(variabelYangLama)
            umur = 19
            umur = str(umur)
        ```
    - Typecasting `input()`: 
        ```python
            umur = int(input("Masukkan umur: "))
            umur = int(umur)
        ```
- [x] Data Types
    - Bilangan bulat
        `int`: Bilangan bulat di dalam pemrograman
    - Bilangan desimal
        `float`: Floating point
    - Karakter
        `str`: Tipe data >= 1 Huruf
    - Logika
        `bool`: Tipe data logika (Antara True or False, 1 or 0)
        
> Next Session
Review