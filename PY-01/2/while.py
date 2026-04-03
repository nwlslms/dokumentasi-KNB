jumlah_nilai = int(input("Masukkan jumlah nilai: "))
i = 0

total = 0
while i < jumlah_nilai:
    nilai = int(input("Nilai %d: " % (i+ 1)))
    total += nilai
    i += 1
    
total /= jumlah_nilai

print("Rata-rata nilai siswa: %f" % total)