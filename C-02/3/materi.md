# C-02: Session 3

> Review

- [x] Tipe Data & Variabel
- Bilangan bulat: **short**, **int**, **long**, **long long**
- Desimal: **float**, **double**, **long double**
- Karakter: **char**, **char[]**
- [x] Input
`scanf()`
Identifier [%]:
- Bilangan bulat: **%hd**, **%d**, **%ld**, **%lld**
- Desimal: **%f**, **%lf**, **%Lf**
- Karakter: **%c**, **%s**, **%[^\n]**
```c
    int a, b;
    scanf("%d %d", &a, &b);
```
- [x] Output
`printf()`
Identifier [%]:
- [flags]:
1. `+` nampilin -/+ dalam bilangan
2. `-` supaya rata kiri
3. `0` nampilin 0 di kiri
- [width]:
Cell untuk outputnya
- [Identifier]
- [.precision]
Untuk nampilin berapa cell output
> Main Course

- [x] Operator
Aritmatika, Relasional, Logika, Bitwise
1. Aritmatika
*, /, +, -
- `%` = a mod b = sisa bagi
12 / 7 = 1<br>
12 % 7 = 5

2. Relasional
<, >, <=, >=
- `==`: a == b => nilai a dan b sama
- `!=`: a != b => nilai a dan b berbeda
Mengembalikan nilai benar/salah, 1/0<br>

3. Logika
- AND (&&)
Pernyataan salah satu, maka salah semua
- OR (||)
Cukup satu benar, maka semuanya benar
- NOT (!)
Memutar nilai kebenaran

4. Bitwise
&, |, ~, ^, >>, <br>

- [x] If condition (Program Control)
1. if
```c
    if (syarat) {
        lakukan;
    }
```
2. if - else
3. if - else if n - else
4. Nested if
If yang bersarang
> Next Session
> Looping
>> For, while, do while, algoritma dasar loop (bintang)
