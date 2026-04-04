#List []
a = [2, "V8", 1800, 900.2]

#Akses index dari kiri 0
#Akses index dari kanan -1
print(a[0])
a.append("Sedan")
print(a)
a.remove(2)
print(a)
print(a.index(900.2))

#Tuple ()
tuples = (3.14, 9.8, "Test")
print(tuples)
print(tuples.count(10)) #Nampilin data yang dicari ada berapa
print(tuples[0])
print(tuples[-1])
tuples = (3.14)
print(tuples)

#Dictionary {}
kamus = {
    "You" : "kamu",
    "I" : "Aku",
    "They": "Mereka",
    "Jumlah": 120
}

print(kamus["You"])
print(kamus["Jumlah"])

kamus["We"] = "Kami"
print(kamus["We"])

#Set
