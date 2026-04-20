# C-02: Session 5
> Review
- [x] Loop
    - for()
        ```c
            //for(deklarasi; batas; eksekusi) {
                //statement yang dieksekusi
            //}
            // Print 1 - 100
            for(int i = 1; i <= 100; i++) {
                printf("%d\n", i);
            }
        ```
    - while()
        ```c
            /*
            variabelLooping = x;
            while(syarat) {
                lakukan
            }*/
            // Print 1 -100
            i = 1
            while (i <= 100) {
                printf("%d\n", i);
                i++; 
            }
        ```
    - do-while()
        ```c
            variabelLooping = x
            do {

            } while (syarat);

            i = 1
            do {
                printf("%d\n", i);
                i++;
            } while(i <= 100);
        ```
> Main Course
- [x] If Statement
    Kontrol jalannya suatu program
    - if
        - if-else
        ```c
            if (n > 0) {
                printf("Bilangan ini lebih dari 0\n");
            } else {
                printf("Bilangan ini kurang sama dengan dari 0");
            }
        ```
        - if - else if n - else
        ```c
            if (n > 0) {
                printf("Bilangan ini lebih dari 0\n");
            } else if (n == 0) {
                printf("Bilangan ini adalah 0\n");
            }
            else {
                printf("Bilangan ini kurang dari 0");
            }
        ```
        - Nested If
        ```c
            if (n > 0) {
                printf("Bilangan ini positif\n");
                if (n % 2 == 0) {
                    printf("Dan bilangan ini genap\n");
                } else {
                    printf("Dan bilangan ini ganjil\n");
                }
            } else if (n == 0) {
                printf("Bilangan ini adalah 0\n");
            } else {
                printf("Bilangan ini negatif\n");
                if (n % 2 == 0) {
                    printf("Dan bilangan ini genap\n");
                } else {
                    printf("Dan bilangan ini ganjil\n");
                }
            }
        ```
    - switch
    ```c
        switch(n) {
            case 1:
                printf("Senin\n");
                break;
            case 2:
                printf("Selasa\n");
                break;
            default:
                printf("TIDAK TERDEFINISI\n");
                break;
        }
    ```
- [x] Loop
    Iterasi = perulangan ke-n
    - for
        `for(deklarasi; syarat batasan; eksekusi) {statement}`
        ```c
            int n;
            scanf("%d", &n);
            /*
                n = 10
                0 < 10
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9 = 10 kali iterasi
            */
            int total = 0;
            for (int i = 0; i < n; i++) {
                int nilai;
                scanf("%d", &nilai);
                total += nilai;
            }
            float rata = (float)total / n;
            printf("%f", rata);
        ```
    - while
        ```c
            int i = 0;
            while (i <= 100) {
                printf("%d ", i);
                i++;
            }
            int n;
            scanf("%d", &n);
            int i = 0;
            int total = 0;
            while (i < n) {
                int data;
                scanf("%d", &data);
                total += data;
            }
            float rata = (float)total / n;
            printf("%f", rata);
        ```
    - do-while
        ```c
            int i = 101;
            do {
                printf("%d ", i);
                i++;
            } while(i <= 100);
        ```
    - Break & Continue
        - Break
            `break`: Keluar dari perulangan
        - Continue
            `continue`: Lanjut ke iterasi berikutnya
> Next Session
Array