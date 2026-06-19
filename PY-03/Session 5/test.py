baris = 5

for i in range(baris):
    for j in range(baris-i-1):
        print(" ", end=" ")
    for k in range(i + 1):
        print("*", end=" ")
    print()