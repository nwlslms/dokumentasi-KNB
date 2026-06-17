y = int(input("Masukkan batas y: "))

i = 0
while i < y:
    print(i, end=", ")
    i += 1

print()
x = int(input("Masukkan batas awal x: "))
i = x
while i < y:
    print(i, end=", ")
    i += 1
print()

z = int(input("Masukkan step z: "))
i = x
while i < y:
    print(i, end=", ")
    i += z

jumlahData = int(input("Masukkan jumlah data: "))
totalSkor = 0
i = 0
while i < jumlahData:
    nilai = float(input(f"Masukkan nilai ke-{i+1}: "))
    totalSkor += nilai
    i += 1
print(f"Rata-rata {jumlahData} nilai adalah: {totalSkor / jumlahData}")