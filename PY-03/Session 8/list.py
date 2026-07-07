# Semester 1, 7 Matkul
Aljabar = 81
Design = 90
Algorithm = 99
#        0   1   2
nilai = [81, 90, 99]
#        -3  -2  -1

# Akses
print(f"nilai[0] = nilai[-3]")
print(f"{nilai[0]} = {nilai[-3]}")

# x : y
print(nilai[:3]) # 0 : 3
print(nilai[1:]) # 1 : 3
print(nilai[:])  # 0 : 3

# Add List
nilai.append(80)
nilai.insert(1, 100)
print(nilai)

sem1 = [100, 90, 80, 70]
sem2 = [90, 66, 76, 85]

semester = sem1 + sem2
print(semester)

sem1.extend(sem2)
print(sem1)

# Remove Item
ketemu = 0
for i in range(len(semester)):
    print(ketemu)
    if semester[i] == 90:
        ketemu = i
semester.pop(ketemu)
print(semester)

del semester[2]
del semester
# print(semester)

# Trace
for i in range(2, len(sem1)):
    print(sem1[i], end=" ")
print()


#for i in range(10):
#print(i, end=" ")
for i in sem1:
    print(i, end=" ")

# Copy
#print()
#semester = sem1
#print(semester)
#print(sem1)
#semester.pop()
#print(semester)
#print(sem1)
print()
semester = sem1.copy()

semester = sem1[:]
print(semester)