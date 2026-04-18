# Faktorial
# n!: n * n-1 * n-2 * ... * 1
def faktorial(x):
    total = 1
    for i in range(x, 0, -1):
        total *= i
    print(total)

def faktorekursif(x):
    # Base Case
    if x == 0 or x == 1:
        return 1
    return x * faktorekursif(x-1)

faktorial(6)
# Fibonacci
def fib(x):
    a = 0 
    b = 1
    for i in range(x):
        print(a, end=' ')
        temp = a + b
        a = b
        b = temp
fib(10)

def fibrekursif(x):
    if x <= 1:
        return n
    return fibrekursif(x-1) + fibrekursif(x-2)
print()
print(fib(10))