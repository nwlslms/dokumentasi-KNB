# Tampilin dari 1 - x
y = int(input("Masukkan batas y: "))

for i in range(y):
    print(i, end=", ")
print()
x = int(input("Masukkan awal rentang x: "))

for i in range(x, y):
    print(i, end=", ")

z = int(input("Masukkan spasi rentang z: "))

for i in range(x, y, z):
    print(i, end=", ")

totalScore = 0
jumlahData = int(input("Masukkan jumlah data: "))

for i in range(jumlahData):
    nilai = float(input("Masukkan nilai: "))
    totalScore += nilai

print(f"Rata-rata {jumlahData} nilai adalah: {totalScore / jumlahData}")