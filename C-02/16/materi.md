# C-02: Session 16
> Review
- [x] Fungsi
    Susunan kode untuk memecahkan suatu problem.

> Main Course
- Definisi
    `Tipe data baru yang didefinisikan dari tipe data yang sudah ada. Tipe data yang berisi kumpulan tipe data serupa.`
    - Array: Variabel banyak yang serupa.
    ```c
        int absenSiswa[5];
        int umurSiswa[5];

        struct Siswa {
            int absen;
            int umur;
        }
    ```

- Code
    ```c
        struct namaStruct {
            dataStruct;
        };

        struct Siswa {
            int absen;
            int umur;
        };

        struct Siswa data;

        typedef struct {
            int absen;
            int umur;
        } Siswa;

        Siswa data;
    ```
    - Operator `.`
        Untuk mengakses data di dalam struct.
        ```c
            typedef struct {
                int absen;
                int umur;
            } Siswa;

            Siswa dataSiswa;

            dataSiswa.absen = 17;
            scanf("%d", &dataSiswa.umur);
        ```
    - Array of Struct
    ```c
        int n;
        scanf("%d", &n);
        Siswa *dataSiswa = (Siswa*)malloc(sizeof(Siswa)*n);
        for(int i = 0; i < n; i++) {
            printf("Masukkan nama siswa: ");
            scanf(" %[^\n]", dataSiswa[i].nama);
            printf("Masukkan absen siswa: ");
            scanf("%d", &dataSiswa[i].absen);
            printf("Masukkan umur siswa: ");
            scanf("%d", &dataSiswa[i].umur);
        }

        for(int i = 0; i < n; i++) {
            printf("Nama\t\tAbsen\tUmur\n");
            printf("%s\t\t%d\t%d\n", dataSiswa[i].nama, dataSiswa[i].absen, dataSiswa[i].umur);
        }

        free(dataSiswa);
    ```
> Next Session
> Pointer & Struct