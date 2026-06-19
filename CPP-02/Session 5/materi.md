# CPP-02: Session 5

> Review
- [x] Operator
    - Aritmatika: `+`, `-`, `*`, `/`, `%`
        ```cpp
            int a = 10, b = 12;
            int hasil = a + b;
        ```
    - Assignment: `=`, `+=`, `-=`, etc.
        ```cpp
            int a = 10, b = 12, hasil= 15;
            hasil += a - b; // hasil = hasil + (a - b);
            // hasil = 15 + (10 - 12);
        ```
    - Relasional: `>`, `>=`, `<`, `<=`, `==`, `!=`
        Operator relasional, mereturn nilai 1 atau 0.
        ```cpp
            int a = 10, b = 12;
            int hasil = a > 12;
        ```
    - Logika: `&&`, `||`, `!`
        ```cpp
            int statemen1 = 10 >= 12, statement2 = 15 > 17;
            int logika = statement1 && statement2; 
        ```
- [x] If condition
    Struktur kontrol program
    - if
        ```cpp
            int bilangan;
            cin >> bilangan;
            if (bilangan % 2 == 0 ) {
                cout << "Genap" << endl;
            } else {
                cout << "Ganjil" << endl;

            }
        ```
    - Switch
        Mutlak
        ```cpp
            int hari;
            cin >> hari;
            switch(hari) {
                case 1: cout << "Minggu"; break;
                default: break;
            }
        ```
> Main Course
- [x] Loop (Perulangan)
    Iterasi = Perulangan ke-i
    - For loop
        ```cpp
            for(deklarasi; batasan; eksekusi) {
                statement
            }
        ```
        - Deklarasi
            Deklarasi semua variabel yang bakal di pake di dalam loop.
        - Batasan
            Batasan syarat kapan loop berhenti.
        - Eksekusi
            Eksekusi code singkat (Increment).

        ```cpp
            for(int i = 0; i < 100; i++) {
                cout << (i+1) << endl;
            }
        ```
    - While loop
        Tereksekusi saat syarat memenuhi.
        ```cpp
            variabelIterasi
            while (SYARAT) {
                statement
                variabelIterasi++
            }
        ```
    - Do-While loop
        Tereksekusi minimal sekali.
        ```cpp
            deklarasi;
            do {
                statement;
                variabelIterasi++;
            } while (SYARAT);
        ```
    - Infinite loop yang terdefinisi
        ```cpp
            for(;;) {
                statement;
            }

            while (1) {

            }
        ```
- [x] Break dan Continue
    Harus ada syarat yang memenuhi.
    - Break
        Udahan.
    - Continue
        Skip ke iterasi berikutnya.

- [ ] Bintang Segitiga
    ```
        *
        **
        ***
        ****
        *****

        *****
         ****
          ***
           **
            *
        
            *
           **
          ***
         ****
        *****
        
        *****
        ****
        ***
        **
        *
    ```
> Next Session