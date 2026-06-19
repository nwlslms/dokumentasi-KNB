
baris = 5

# x = 5, 4, 3, 2, 1
for x in range(baris, 0, -1):
    for y in range(baris-x):
        print(" ", end=" ")
    for z in range(x):
        print("*", end=" ")
    print()

# iterasi x = 5 (Iterasi pertama)
    # y = -
    # z = 0, 1, 2, 3, 4
        # print("*", end=" ")
    # baris baru

    # * * * * *

# iterasi x = 4 (Iterasi kedua)
    # y = 0
        # print(" ", end=" ")
    # z = 0, 1, 2, 3
        # print("*", end=" ")
    # baris baru

    # * * * * *
    #   * * * *