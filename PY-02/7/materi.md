# PY-02: Session 7

> Review
- [x] List
- [x] Tuple
- [x] Dictionary

    - Masukkin
        ```python
            list = []
            tuple = ()
            dictionary = {}
            list = list()
            tuple = tuple()
            dict = dict()
        ```
    - Copy data
        ```python
            DataBaru = datanya.copy()
            list2 = list2 + list1
        ```
    - Modifikasi
        ```python
            list[1] = 'apa'
            dictionary[key] = value
        ```
    - Apus
        ```python
            TipeData.clear()
            TipeData.pop()
            del TipeData
            del TipeData[index]
        ```
Reference / referensi:
```python
    list = [1, 2, 3, 4]
    list1 = list
    # Perubahan di salah satunya, akan berdampak ke semuanya
```

> Main Course
Function

Modular paket: Tugas-tugas yang dijalankan saat dipanggil saja

`f(x): 5x + 2`
`f(2): 5 (2) + 2 = 12`
- [x] Function
    - Deklrasi
        ```python
            def NamaFungsi(paramater):
                Tugas Fungsi
                return
        ```
    - Jenis
        - Fungsi dengan return
        - Fungsi tanpa return
- [x] Parameter
    - Formal & Aktual
        Formal: Variabel yang dipakai di fungsi
        Aktual: Variabel yang dimasukkan ke fungsi
    - Opsional
        Parameter yang bisa dicantumkan atau tidak, tetapi memiliki default
- [x] Variabel
    Variabel Scope: Letak di mana variabel bisa dipakai
    - Global
        Bisa dipakai di semuanya
    - Lokal
        Terbatas di indent / scope tertentu
- [x] Nested Function (Class & Object)
    Fungsi yang bersarang
- [x] Rekursif
    Fungsi yang memanggil dirinya sendiri
    - Base Case
        Kasus yang memberhentikan rekursif
    - Rumus
        Implementasi rumus dengan memanggil fungsi
    ```
        Faktorial
        x = 6
        6 * rekursif(5)
        6 * 5 * rekursif(4)
        6 * 5 * 4 * rekursif(3)
        ...
        6 * 5 * 4 * 3 * 2 * rekursif(1)

        Fibonacci
        Fibonacci 8: 0 1 1 2 3 5 8 13 21
    ```

    
> Next Session
Module & Packet, ~