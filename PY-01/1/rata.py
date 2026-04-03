nama = input("Masukkan nama siswa: ")
tugas = float(input("Nilai tugas: "))
uts = float(input("Nilai UTS: "))
uas = float(input("Nilai UAS: "))

nilai_akhir = (tugas + uts + uas) / 3

print("\n=== HASIL NILAI ===")
print("Nama Siswa :", nama)
print("Nilai Akhir:", nilai_akhir)