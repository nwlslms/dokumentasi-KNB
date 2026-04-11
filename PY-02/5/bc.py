# Keluar dari suatu loop, break
# Lanjut ke iterasi berikutnya (skip), continue

for i in range(1, 1001):
    if i % 2 == 1:
        continue
    if i == 500:
        break
    print(i)