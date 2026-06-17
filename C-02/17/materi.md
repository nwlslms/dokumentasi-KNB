# C-02: Session 17

> Review
- [x] Struct
    Tipe data baru yang berisi kumpulan data.
    - Definisi struct
        ```c
            struct Siswa {
                int absen;
                int umur;
                char nama[21];
            };

            struct Siswa data;

            typedef struct {
                int absen;
                int umur;
                char nama[21];
            } Siswa;

            Siswa data;
        ```
    - Akses data struct
        Pakai operator `.`
        ```c
            data.absen = 21;
            data.umur = 18;
            strcpy(data.nama, "Nawwal");
        ```
    - Array
        ```c
            Siswa *data = (Siswa*)malloc(sizeof(Siswa)*n);
            data[1].absen = 21;
        ```
> Main Course
- [ ] Pointer dan Struct
    - Pointer
        - Pointer variabel
            ```c
                int a = 10;
                int *ptr = &a;
            ```
        - Pointer sederajat
            ```c
                int a = 10;
                int *ptr = &a;
                int *ptr2 = ptr;
            ```
        - Double pointer
            ```c
                int a = 10;
                int *ptr = &a;
                int *ptr2 = &ptr;
            ```
    - Struct dan Pointer
        - Operator `->` ARROW
            Ptr mewakili suatu struct.
        - Double Pointer
            |**ptr2|*ptr|data|
            |:-:|:-:|:-:|
            |ptr2|*ptr2|**ptr2|

            Aksesnya
            |**ptr2|*ptr|data|
            |:-:|:-:|:-:|
            |`(*ptr2)->anggota` or `**ptr2.anggota`|`ptr->anggota` or `(*ptr).anggota`|data.anggota (tunggal)|
            |`(*(ptr2)+i)->nama` or `(*ptr2)[i].anggota`|`(ptr1+i)->anggota` or `ptr1[i].anggota`|data[i].anggota (array)|

> Next Session
> Review Pointer dan Struct