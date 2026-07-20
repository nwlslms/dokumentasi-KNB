# C-02: Session 22

> Review
- [x] Deklarasi
    ```c
    FILE *variabel = fopen(namaFile, mode);
    FILE *fp = fopen("data.txt", "r");
    ```
    |Mode|Fungsi|
    |:-:|:-|
    |"r"|Read|
    |"w"|Write (override)|
    |"a"|Append (Nambah di akhir)|
    |"a+"|Append & Read|
    
    Untuk mode "w" dan "a", kalau datanya tidak ada, maka akan dibuatkan filenya.
- [x] Read file
    - Character
        - fgetc();
            ```c
            char tampung = fgetc(fp);
            for(int i = 0; tampung != '\n'; i++) {
                printf("%c", tampung);
                tampung = fgetc(fp);
            }
            ```
    - String
        - Baris
            ```c
            char buffer[100];
            fgets(buffer, sizeof(buffer), fp);
            printf("%s", buffer);
            ```
        - Format
            ```c
            FILE *formats = fopen("format.txt", "r");
            Data mahasiswa[2];
            fscanf(formats, "%[^;];%[^;];%d", mahasiswa[0].nama, mahasiswa[0].kampus, &mahasiswa[0].lulus);
            printf("Nama: %s\nKampus: %s\nLulus: %d\n", mahasiswa[0].nama, mahasiswa[0].kampus, mahasiswa[0].lulus);
            ```
- [x] Write file
    - Character
        ```c
        char teks[] = "Nawwal ganteng banget\n";
        for (int i = 0; teks[i] != '\0'; i++) {
            fputc(teks[i], fp);
        }
        ```
    - String
        - Baris
            ```c
            char text[] = "Nawwal jahat deng\n";
            fputs(text, fp);    
            ```
        - Format
            ```c
            fprintf(fp, "%s;%d;%s\n", "Harits", 2030, "ITS");
            ```
- [x] Close file
    ```c
    fclose(fp);
    ```
> Next Session
> File & Struct