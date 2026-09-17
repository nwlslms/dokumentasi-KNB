# ALG-01: Session 10

> Review
- Nihil

> Main Course
- Looping
    ```cpp
    printf("1\n");
    printf("2\n");
    ...
    printf("100\n");

    for(int i = 1; i <= 100; i++) {
        printf("%d\n", i);
    }
    ```
    > Iteration = Iteration 1 (Proses perulangan yang pertama)
    
    - For
        ```cpp
        for(deklarasi; syarat; line-code) {
            statement;
        }

        for(int i = 0; i < 100; i++) {
            printf("%d", i);
        }

        printf("%d", i); // Salah
        ```

        - Nested loop
            ```cpp
            for(int i = 0; i < 100; i++) {
                for(int j = 0; j < 100; j++) {
                }
            }
            ```
    - While
        ```cpp
        deklarasi variabel iterasi;
        while(syarat) {
            statement;
            increment;
        }
        ```
    - Do-While
        ```cpp
        deklarasi variabel iterasi;
        do {
            statement;
            increment;
        } while (syarat);
        ```
    > Perbedaannya antara While loop dan Do-While adalah: DO-While pasti tereksekusi sekali.

    - Break & Continue
        - Break: Berehenti dari perulangan
        - Continue: Skip iterasi
    
    - Algorithm
        - Persegi
            - Simetris
                ```txt
                *****
                *****
                *****
                *****
                *****
                ```
            - Panjang
                ```txt
                * * * * * * * * * * 
                * * * * * * * * * *
                ```
        - Segitiga
            ```txt
            *
            * *
            * * *
            * * * *
            * * * * *

            * * * * *
              * * * *
                * * *
                  * *
                    *
            
                    *
                  * *
                * * *
              * * * *
            * * * * *

            * * * * *
            * * * *
            * * *
            * *
            *
            ```

> Next Session