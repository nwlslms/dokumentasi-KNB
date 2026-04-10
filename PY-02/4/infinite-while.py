i = 0
while i < 100:
    a = int(input("a: "))
    if a == 0:
        i = 100
    b = int(input("b: "))
    if b == 0:
        i = 100
    print(f"{a} + {b} = {a + b}")