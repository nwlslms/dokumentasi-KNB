
nama_barang = input("Masukkan nama barang: ")
harga = int(input("Masukkan harga barang: "))
jumlah = int(input("Masukkan jumlah barang: "))

total = harga * jumlah

uang_bayar = int(input("Masukkan uang bayar: "))
kembalian = uang_bayar - total

print("\n=== STRUK BELANJA ===")
print("Barang :", nama_barang)
print("Total  :", total)
print("Bayar  :", uang_bayar)
print("Kembali:", kembalian)
