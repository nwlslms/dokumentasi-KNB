# Deklarasi
def f(x):
    hasil = 5 *x + 2
    print(hasil)

# Return
def g(x):
    # 4x^2 + 7x - 10
    hasil = (4*(x**2)) + 7*x - 10
    return hasil

# Tanpa nilai return
def h(x):
    hasil = (4*(x**2)) + 7*x - 10
    print(hasil)

hasil = g(4)
#print(hasil)
print(g(4))

h(4)