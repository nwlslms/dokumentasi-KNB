# PY-02: Session 3

> Review

- [x] Input
Secara dasar, input dalam python **b**
Typecasting: Mengubah data
```python
namaVariabel = tipeData(yangMauDiUbah)
```

- [x] Output
> end=''

Parameter di akhir fungsi print()
```python
# Cara 1
bil = 20
print(f"Isi dari variabel bil adalah {bil}")

# Cara 2 (Output C - Styling)
print("Isi dari variabel bil adalah %d" % (bil))
```
**%d** = int
**%f** = float
**%s** = str
- [x] Jenis tipe data
- **int** = integer / bilangan bulat
- **float** = float / decimal point
- **str** = string / karakter
- **list** = Daftar dari kumpulan data
>> namaVariabel = [isiData]
.append, .remove
- **tuple** = List yang paten (konstan)
>> namaVariabel = ()

- **dictionary** = Kamus, Mapping (key  , value)

>> namaDictionary = {key:value}

- **set** = Tuple tanpa nilai ganda

>> namaSet = set([data])

<br>

> Main Course

- [x] Operator
Aritmatika, relasional, logika, bitwise.
1. Aritmatika
+, -, *
- `**` = a ** b == a pangkat b
- `/` = a / b == a dibagi b
- `//` = a // b == integer a dibagi b
> 18 // 7 = 2
- `%` = a % b = sisa baginya
> 12 % 5 = 4

2. Relasional
<, >, <=, >=
- `==` = a == b -> a sama seperti b
- `!=` = a != b -> a bukan sama seperti b

Hasil -> True / False; 1 / 0;

3. Logika
- AND
SALAH SATU STATEMENT, SALAH SEMUA
- OR
SATU BENAR, MAKA BENAR
- NOT
MEMUTAR NILAI KEBANARAN

4. Bitwise
- and / &
- | / or
- ~ / not
- `>>` / shift right
dibagi 2
-  `<<` / shift left
dikali 2


- [x] If condition (Program Control)
1. if
```pyhthon
if syarat:
    eksekusi
```
2. if-else
3. if-elif n-else

Nested if
If yang bersarang
> Next Session
> Looping
