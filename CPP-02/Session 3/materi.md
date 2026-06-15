# CPP-03: Session 3

> Review
- [x] Input
    - `cin >> variabel`
        ```cpp
            int a, b, c;
            cin >> a;
            cin >> b;
            cin >> c;

            cin >> a >> b >> c;
        ```
    
    - `getline(cin, variabelText)`
        Input text sampai karakter `enter`
        ```cpp
            string namaLengkap;
            getline(cin, namaLengkap);
        ```
    
    - `cin.ignore()`
        Buat ngilangin karakter spasi di dalam buffer
        Input
        ```
        Umur: 17
        Nama: Siti
        ```
        Buffer
        |0|1|2|3|4|5|6|
        |:-:|:-:|:-:|:-:|:-:|:-:|:-:|
        |17|`spasi`|S|i|t|i|\n|

        Hasil `cin.ignore()`
        |0|1|2|3|4|5|6|
        |:-:|:-:|:-:|:-:|:-:|:-:|:-:|
        |17|S|i|t|i|\n||
        ```cpp
            cin >> umur;
            cin.ignore();
            cin >> nama;
        ```
- [x] Output
    - `cout << Text`
        ```cpp
            int a = 10, b = 12;
            string nama = "Siti";
            cout << a << endl << b << endl << nama << endl;
        ```
    - Karakter `\`
        - `\n`: Newline
        - `\t`: Karakter tab
    
- [x] Data Types
    - Unsigned
        Rentang data dimulai dari 0.
        
---

> Main Course

Proses pembuatan program
File -> Compile -> Bahasa Mesin -> Build -> Program

---

> Next Session
> Operator