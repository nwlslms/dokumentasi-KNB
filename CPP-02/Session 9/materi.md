# CPP-02: Session 9

> Review
- [ ] Loop
    - For loop
        ```cpp
        for(deklarasi; syarat; sintaks) {
            Statement
        }

        for(int i = 0; i < 10; i++) {
            cout << i << endl;
        }
        ```
    - While loop
        ```cpp
        deklrasi
        while(syarat) {
            statement
            increment
        }

        int i = 0;
        while(i < 10) {
            cout << i << endl;
            i++;
        }
        ```
    - Do-While loop
        ```cpp
        deklarasi
        do {
            statement;
            increment;
        } while (syarat);
        int i = 0;
        do {
            cout << i << endl;
            i++;
        } while (i < 10);
        ```
- [ ] Array
    > Kumpulan data identik yang banyak, diwakilkan oleh 1 variabel.
    ```cpp
    string siswa1 = "";
    string siswa2 = "";

    string nama[2];

    // Indexing
    nama[1] = "Jojo";
    ```
    - Deklarasi
        ```cpp
        TipeData namaVariabel[jumlah];

        // Deklarasi kosong
        float nilai[50];

        // Deklarasi langsung
        float nilai[50] = {100, 90, 80, 60, 70};

        // Deklarasi tak terdefinisi
        float nilai[] = {100, 90, 80, 70, 80};
        ```

    - Tracing Array
        - Access by Index
            ```cpp
            float nilai[] = {100, 80, 90 , 66, 77};
            nilai[3] = 100;
            cout << nilai[3] << endl;
            cin >> nilai[1];
            ```
        - Tracing through loop
            ```cpp
            float nilai[5];
            // cin >> nilai[0];
            // cin >> nilai[1];
            // cin >> nilai[2];
            for(int i = 0; i < 5; i++) {
                cin >> nilai[i];
            }
            for(int i = 0; i < 5; i++) {
                cout << "Index ke-" << i << ": " << nilai[i] << endl;
            }
            ```
    - Array of Characters
        ```cpp
        // Makan
        // char c1 = 'M';
        // char c2 = 'a';
        char kata[6] = {'M', 'a', 'k', 'a', 'n', '\0'};
        for(int i = 0; kata[i] != '\0'; i++) {
            cout << kata[i];
        }
        cout << endl << kata << endl;

        string kata2 = "Minum";
        cout << endl <<  kata2 << endl;
        for(int i = 0; kata2[i] != '\0'; i++) {
            cout << kata2[i];
        }
        ```
    
    - Dimensi
        - 1 Dimensi
        - 2 Dimensi
        - 3 Dimensi
        ```cpp
        ```
> Next Session