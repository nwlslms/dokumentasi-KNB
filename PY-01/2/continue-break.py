for i in range(1, 11):
    print(i)
    if i == 7:
        break

print("\n\n\n")

for i in range(1, 11):
    if i % 2 == 1:
        continue
    print(i)