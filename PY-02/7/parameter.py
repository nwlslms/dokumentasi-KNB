def kali(a, b):
    return a * b

def tampilkan(text, opsional='#'):
    print(text + opsional, end='')

def summarize(data, urutan=0):
    if urutan == 0:
        total = 0
        for i in data:
            print(f"{i} + ", end='')
            total += i
        print(f"= {total}")
    elif urutan == 1:
        total = 0
        for i in data:
            if i % 2 == 1:
                print(f"{i} + ", end='')
                total += i
        print(f"= {total}")
    elif urutan == 2:
        total = 0
        for i in data:
            if i % 2 == 0:
                print(f"{i} + ", end='')
                total += i
        print(f"= {total}")
    else:
        print("URUTAN TIDAK TERDEFINISI")

x = 10
y = 12
print(kali(x,y))

print("Parameter Opsional end='\\n'")
tampilkan("ANJAY", opsional='\n')

data = [42, 7, 89, 15, 63, 28, 94, 56, 3, 77, 
 12, 65, 99, 21, 8, 50, 34, 72, 18, 91,
 44, 27, 60, 11, 85, 39, 70, 25, 97, 5,
 33, 68, 14, 80, 46, 19, 55, 29, 92, 36,
 9, 64, 23, 88, 31, 75, 13, 58, 41, 95,
 2, 67, 17, 83, 26, 61, 10, 90, 38, 73,
 16, 52, 30, 78, 4, 66, 22, 87, 35, 71,
 20, 53, 32, 79, 6, 62, 24, 86, 40, 74,
 1, 57, 37, 82, 15, 59, 43, 93, 28, 76,
 12, 54, 45, 84, 27, 69, 18, 81, 47, 96]


summarize(data)
summarize(data, urutan = 1)
summarize(data, urutan = 2)
summarize(data, urutan = 3)


