print("Hello World!")
a = 10
phi = 3.14
logika = True
kata = "takdir"

#Menampilkan variabel
print(a)
print(phi)
print(logika)
print(kata)

#Nampilin text & Mengatur nilai variabel
a = int(input("Nilai a: "))
b = int(input("Nilai b: "))

#Nilai a + b = (a+b)
print(a, " + ", b, " = ", a + b)

#Concat
print(str(a) + " + " + str(b) + " = " + str(a + b))

#str.format

print("{} + {} = {}".format(a, b, (a+b)))

#F-String
print(f"{a} + {b} = {a+b}")

#C - Style
print("%d + %d = %d" % (a, b, a +b))

#Parameter end=''

#\n = baris baru (character new line)
print("Hello World", end=', ')
print("Nawwal")