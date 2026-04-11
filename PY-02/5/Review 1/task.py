nilai = []
# Gunakan while True supaya program loop tanpa henti
while True:
    print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
    print("+=======================+")
    print("|PROGRAM MANAJEMEN NILAI|")
    print("+=======================+")
    print("1. Tambah nilai\n2. Hapus nilai\n3. Hitung rata-rata nilai\n4. Exit")
    cmd = int(input(">> "))
    if cmd == 1:
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
                print("Belum ada nilai yang dimasukkan")
            # Jika ada anggota di dalam nilai[], maka tampilkan semua anggotanya
            # 100, 90, 20, 80,
            else:
                # Iterasi langsung anggota list
                for i in nilai:
                    print(f"{i}, ", end='')
                print()
            masuk_nilai = float(input("Nilai (-1 untuk keluar): "))
            # Jika input == -1, maka keluar dari loop opsi 1
            if masuk_nilai == -1:
                break
            # Jika input selain -1, maka masukkan nilai ke dalam list
            else:
                nilai.append(masuk_nilai)
                
    elif cmd == 2:
        while True:
            print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
            print("+=======================+")
            print("|PROGRAM MANAJEMEN NILAI|")
            print("+=======================+")
            # Check, jika list nilai kosong, maka langsung keluar dari loop opsi 2
            if nilai == []:
                print("Tidak ada nilai yang bisa dihapus!")
                break
            # Jika list tidak kosong, maka tampilkan terlebih dahulu nilai yang ada seperti di opsi 1
            else:
                print("Nilai: ", end='')
                for i in nilai:
                    print(f"{i}, ", end="")
                print()
                hapus_nilai = float(input("Masukkan nilai yang ingin dihapus (-1 untuk keluar): "))
                # Jika input == -1, maka keluar dari loop
                if hapus_nilai == -1:
                    break
                # Jika input selain -1, maka hapus nilai dari list
                else:
                    nilai.remove(hapus_nilai)

    elif cmd == 3:
        print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
        print("+=======================+")
        print("|PROGRAM MANAJEMEN NILAI|")
        print("+=======================+")
        print("Nilai rata-ratamu adalah: ", end="")
        total = 0
        # Iterasi seluruh anggota list
        # Kemudian gunakan rumus total += nilai[x] untuk menambahkan ke varibel total
        for i in nilai:
            total += i
        # Rumus rata rata = total nilai / jumlah nilai
        print(f"{total / len(nilai)}")

    else:
        print("Program ended, huh!?")
        break