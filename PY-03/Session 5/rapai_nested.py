baris = 5

# i = 0, 1, 2, 3, 4
for i in range(baris):
    for j in range(baris - i - 1):
        print(" ", end=" ")
    for k in range(i+1):
        print("*", end=" ")
    print()

# Iterasi pertama (i = 0)
# j = 0, 1, 2, 3
    # print spasi = 4
# k = 0
    # print bintang = 1

# `        * `

# Iterasi kedua (i = 1)
# j = 0, 1, 2
    # print spasi = 3
# j = 0, 1
    # print bintang = 2

# `        * `
# `      * * `