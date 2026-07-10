list = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
list[2][1] = 10
list[2].insert(1, 5)
del list[2][2]
print(list)

for x in list:
    for y in x:
        print(y, end="")
    print()

list_3d = [
    [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ],
    [
        [10, 11, 12],
        [13, 14, 15],
        [16, 17, 18]
    ]
]

for halaman in list_3d:
    for baris in halaman:
        for nilai in baris:
            print(nilai, end=" ")
        print()
    print()
    print()