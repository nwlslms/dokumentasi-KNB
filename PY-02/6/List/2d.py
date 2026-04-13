# 1 2
# 3 4

matrix = [[1,2, 3], [4, 5, 6], [7, 8, 9]]
print(matrix)


for i in matrix:
    for j in i:
        print(j, end=' ')
    print()