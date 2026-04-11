nilai = []
# Gunakan while True supaya program loop tanpa henti
while True:
    print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
    print("+=======================+")
    print("|PROGRAM MANAJEMEN NILAI|")
    print("+=======================+")
    print("1. Tambah nilai\n2. Hapus nilai\n3. Hitung rata-rata nilai\n4. Exit")
    cmd = 
    if :
        while True:
            print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
            print("+=======================+")
            print("|PROGRAM MANAJEMEN NILAI|")
            print("+=======================+")
            # Jika tidak ada anggota dalam nilai[], maka tampilkan
            # Belum ada nilai yang dimasukkan
            print("Nilai: ", end="")
            # nilai == [] (Ngecek apakah list nilai kosong)
            if nilai == []:
                
            # Jika ada anggota di dalam nilai[], maka tampilkan semua anggotanya
            # 100, 90, 20, 80,
            else:
                # Iterasi langsung anggota list
                for i in nilai:
                    
            masuk_nilai =
            # Jika input == -1, maka keluar dari loop opsi 1
            if:
                
            # Jika input selain -1, maka masukkan nilai ke dalam list
            else:
                
    elif :
        while True:
            print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
            print("+=======================+")
            print("|PROGRAM MANAJEMEN NILAI|")
            print("+=======================+")
            # Check, jika list nilai kosong, maka langsung keluar dari loop opsi 2
            if :
            
            # Jika list tidak kosong, maka tampilkan terlebih dahulu nilai yang ada seperti di opsi 1
            else:
                print("Nilai: ", end='')
                for :
                    
                print()
                hapus_nilai = 
                # Jika input == -1, maka keluar dari loop
                if :
                
                # Jika input selain -1, maka hapus nilai dari list
                else:
                    nilai.(hapus_nilai)

    elif :
        print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
        print("+=======================+")
        print("|PROGRAM MANAJEMEN NILAI|")
        print("+=======================+")
        print("Nilai rata-ratamu adalah: ", end="")
        total = 0
        # Iterasi seluruh anggota list
        # Kemudian gunakan rumus total += nilai[x] untuk menambahkan ke varibel total
        for :
            
        # Rumus rata rata = total nilai / jumlah nilai
        print(f"{ / len(nilai)}")

    else:
        print("Program ended, huh!?")
        break