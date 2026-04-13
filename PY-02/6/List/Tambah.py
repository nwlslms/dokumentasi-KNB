keranjang = ['apel', 'mangga', 'jeruk']
print(keranjang)
for i in keranjang:
    print(i)

keranjang.append('rambutan')
print(keranjang)
keranjang.insert(1, 'Naga')
print(keranjang)

keranjang2 = ['manggis', 'tomat', 'semangka']

# keranjang.append(keranjang2)
keranjang.extend(keranjang2)
print(keranjang)

keranjang3 = ['durian', 'pir']
# +
keranjang_baru = keranjang + keranjang3
print(keranjang_baru)