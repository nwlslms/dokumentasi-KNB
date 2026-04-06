bil = int(input("bilangan: "))

if bil == 0:
    print("Ini adalah bilangan 0")
elif bil < 0:
    print("Ini adalah bilangan negatif")
    if bil % 2 == 0:
        print("Bilangan genap")
    else:
        print("Bilangan ganjil")
elif bil > 0:
    print("Ini adalah bilangan positif")
    if bil % 2 == 0:
        print("Bilangan genap")
    else:
        print("Bilangan ganjil")
else:
    print("Undefined")