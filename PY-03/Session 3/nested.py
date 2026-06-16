bilangan = int(input("Bilangan: "))

if bilangan < 0:
    if bilangan % 2 == 0:
        print("Ini genap")
    else:
        print("Ini ganjil")
    print("Ini negatif")
elif bilangan > 0:
    if bilangan % 2 == 0:
        print("Ini genap")
    else:
        print("Ini ganjil")
    print("Ini positif")
else:
    print("Bilangan ini 0")