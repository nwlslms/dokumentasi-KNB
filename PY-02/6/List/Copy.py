# Reference
makanan = ['burger', 'kebab']
makanan_ref = makanan

print(makanan)
print(makanan_ref)

makanan_ref.remove('burger')

print(makanan)
print(makanan_ref)

# Copy
makanan = ['burger', 'kebab']
makanan_copy = makanan.copy()
print(makanan)
print(makanan_copy)
makanan_copy.remove('kebab')
print(makanan)
print(makanan_copy)

# Method
makanan = ['burger', 'kebab']
makanan_method= list(makanan)
print(makanan)
print(makanan_method)
makanan_method.remove('kebab')
print(makanan)
print(makanan_method)
