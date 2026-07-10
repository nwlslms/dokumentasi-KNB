konstanta = (3.14, 9.8)

print(konstanta[:])

modifikasi = list(konstanta)
modifikasi.append(100)
konstanta = tuple(modifikasi)
print(konstanta)

tambah = (1000, 10000)

konstanta = konstanta + tambah
print(konstanta)

for i in range(len(konstanta)):
    print(konstanta[i], end=" ")
print()
for i in konstanta:
    print(i, end = " ")

temporary = list(konstanta)
baru = tuple(temporary)
print(baru)