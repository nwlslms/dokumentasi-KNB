g = 10 # Variabel Global

def f1():
    print(f"Variabel g di dalam f1: {g}")

def f2():
    g = 20 # Variabel Lokal
    print(f"Variabel g di dalam f2: {g}")

f1()
f2()
f1()
