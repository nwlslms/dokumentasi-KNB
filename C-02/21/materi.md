# C-02: Session 21

> Review
- [x] Output
    ```c
    printf(teks, variabel);
    printf("Hello World");
    printf("Umur aku %d", umur);
    ```
- [x] Input
    ```c
    int angka;
    scanf("%d", &angka);
    char text[21];
    scanf("%[^\n]", text);
    scanf("%[^.]", text);
    ```
> Main Course
- [x] File handling
    - Open file
        ```c
        FILE *variabel = fopen(namaFile, Mode)

        if (!variabel) {
            printf("File tidak ketemu!\n");
            return 1;
        }
        ```
        |Mode|Keterangan|
        |:-|:-|
        |"r"|Read file|
        |"w"|Tulis file (override)|
        |"a"|Append (tambah di akhir file)|
        |"a+"|Read and append|
    - Write File
        - Output char
            ```c
            fputc(karakter, variabel);
            char nama[] = "Nawwal Salim";
            for (int i = 0; nama[i] != '\0'; i++) {
                fputc(nama[i], fp);
            }
            ```
        - Output string
            ```c
            fputs(text, variabel);
            fputs("List orang ganteng\n", fp);
            ```
        - Output formatted string
            ```c
            fprintf(variabel, text, variabelFormat);
            fprintf(fp, "Orang: ");
            fprintf(fp, "%s\n", name);
            ```
    - Read
        - Input char
            ```c
            char c;
            c = fgetc(fp);
            for(int i = 0; i < 200; i++) {
                printf("%c", fgetc(fp));
            }
            ```
        - Input line
            ```c
            char buffer[100];
            fgets(buffer, jumlahChar, variabel);

            char buffer[100];
            fgets(buffer, sizeof(buffer), fp);
            printf("%s", buffer);
            fgets(buffer, sizeof(buffer), fp);
            printf("%s", buffer);
            ```
        - Input format
            ```c
            fscanf(variabelFile, text, variabel)
            ```
    - Tracing file
        ```c
        // Data terformat
        // 1234;TEKS;123.4
        while(fscanf(variabelFile, "%d;%[^;];%f", variabelPenampung) == jumlahPenampung) {

        }

        while(fgets(buffer, sizeof(buffer), fp)) {
            int buang = strcspn(buffer, "\n");
            buffer[buang] = '\0';

            if(sscanf(buffer, "%d;%[^;];%f", variabelPenampung) == 3) {
                sukses;
            }
        }
        ```
> Next Session