baris = int(input("Jumlah baris: "))

for i in range(baris):
    for j in range(i + 1):
        print("*", end='')
    print()

print()

for i in range(baris):
    for j in range(i):
        print(" ", end='')
    for j in range(baris, i, -1):
        print("*", end='')
    print()
print()
for i in range(baris):
    #spasi
    for j in range(i, baris):
        print(" ", end='')
    #bintang
    for j in range(i + 1):
        print("*", end='')
    print()
print()
for i in range(baris):
    for j in range(baris, i, -1):
        print('*', end='')
    print()
