g = 10 # Global

def f1():
    print(g)

def f2():
    g = 20 # Lokal
    print(g)

f1()
f2()