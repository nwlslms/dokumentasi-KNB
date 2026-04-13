# PY-02: Session 6
> Review
- [x] Loop
- `for`
```python
    for variabel in range(x, y, z):
        lakukan
    
    #Print dari 1 - 10
    for i in range(1, 11):
        print(i)

    keranjang = ['apel', 'mangga', 'pisang']
    for i in keranjang:
        print(i)

    # Break dan continue
    for i in range(1, 1000):
        # Kalau misalnya udah 500, maka berenti
        if i == 500:
            break
        # Kalau misalnya ganjil, maka kita lanjut ke iterasi berikutnya
        if i % 2 == 1:
            continue
        print(i)
```

- `while`
```python
    variabelIterasi = x
    while syarat:
        eksekusi
    
    i = 1
    while i <= 10:
        print(i)
        i += 1

    # Break dan continue
    i = 1
    while i <= 1000:
        if i == 500:
            break
        if i % 2 == 1:
            i += 1
            continue
        print(i)
        i += 1
```
> Main Course
Cara mengetahui panjang anggota = `len(yangDicari)`
- [x] List
    Kumpulan data
    - Menambahkan
        - `.append(Anggota)`
        - `.insert(Position, Anggota)`
        - `.extend(List)`
        - `listBaru = list1 + list2` Concat (Nyambung)
    - Menghapus
        - `.remove(Anggota)`: Specified
        - `.pop(Index)`: Menghapus berdasarkan Index
        - `del list[Index]`: Menghapus berdasarkan Index
        - `del list`: Menghapus list
        - `.clear()`: Menghapus anggota seluruhnya
    - Edit
        Modifikasi nilai
        ```python
            list = [a, b, c, d]
            # list[0] = a
            # list[4] = d
            list[0] = e
        ```
    - Copy
        Copy: Menduplikasi anggota list ke list yang baru
        Reference: List baru adalah list lama
        - `ListBaru = ListLama.copy()`: Copy anggota list
        - Method `ListBaru = list(list)`: Copy gaya method
    - Dll
        - Ngurutin
            - `.reverse()`: Membalik list
            - `.sort()`: Mengurutkan ascending (kecil -> gede)
            - `.sort(reverse = True)`: Mengurutkan descending (besar -> kecil)
            - `.sort(key = )`: PR SETELAH FUNCTION
        - Indexing
            `print(list[x:y])`
            - `x:`: Dari x sampai akhir
            - `:y`: Dari 0 sampai y
            - `x:y`: Dari x sampai y
    - 2 Dimensi / +
        - List di dalam list
- [x] Tuple
    Kumpulan data YANG KONSTAN = GAK BISA DIUBAH
    - Modifikasi
        Tuple -> List -> Tuple
        - Method `myTuple = tuple(List)`
    - Nambah
        - `+`: `Tuple += tuple`
- [x] Dictionary
    - Nambah
        - `dictionary[key] = value`: Nambah key:value langsung
        - `.update({key:value})`: Nambah key:value dengan method .update()
    - Hapus
        - `.pop(key)`: Menghapus beradasarkan key
        - `.popitem()`: Menghapus key:value yang terakhir
        - `del myDictionary[key]`: Menghapus berdasarkan key
        - `.clear()`: Kosongin dictionary
    - Edit
        - `dictionary[key] = index`: Edit by key:value secara langsung
        - `dictionary.update({key:value})`
    - Copy
        - `.copy()`: Copy dictionary
        - Method `Baru = dict(yangDicopy)`: Copy dictionary ala method
    - Dll
        Print
            - `.items()`:
            - `.keys:`:
            - `.values()`:
    - 2 Dimensi
    
> Next Session
Function