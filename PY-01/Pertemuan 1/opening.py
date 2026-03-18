print("Hello World") #Ini menampilkan Hello World
print("Halo Dunia") #Ini menampilkan Halo Dunia

nama = input("Nama kamu: ")
print("Halo %s" % nama)

a = 12
b = 3.14
c = 'c'
kata = "Anjay"
print(type(c))
print(type(kata))

print("Variabel a: %d" % a)
print("Variabel b, c, dan kata: %f %s %s" % (b, c, kata))

#Array adalah kumpulan data banyak yang serumpun
#List
nilai_bahasa = [100, 90, 60, 98, 30, 70]
print(type(nilai_bahasa))

#Tuple
#List yang permanen
nilai_kkm = (70, 75, 60, 50)
print(type(nilai_kkm))

#Dictionary
#Key Value
kamus = {
    "Phi":3.14,
    "Alpha": 1.9099999
}

print(type(kamus))

