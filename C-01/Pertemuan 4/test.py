nama = input("Masukkan namamu: ")

budget = int(input("\nMasukkan budgetmu: "))
harga_Nasipadang = 19000
harga_Ayambakar = 19000
harga_Pecellele = 15000
harga_Nasigorengspecial = 13000
harga_Ayamgeprek = 12000
harga_Nasicampur = 10000
harga_Pentol = 10000

if budget >= 20000:
    print("\nNasi Padang: Rp 19.000")
    print("Ayam bakar: Rp 19.000")
    print("Pecel lele: Rp 15.000")
    print("Nasi goreng special: Rp 13.000")
    print("Ayam geprek: Rp 12.000")
    print("Nasi campur: Rp 10.000")
    print("Pentol: Rp 10.000")

elif budget >= 10000:
    print("\nAyam geprek: Rp 12.000")
    print("Nasi campur: Rp 10.000")
    print("Pentol: Rp 10.000")

pilihan_menu = input("\nMau makan apa hari ini: ")

if pilihan_menu == "Nasi padang":
    print("Baiklah, tunggu sebentar")
    total_Nasipadang = harga_Nasipadang
    kembalian_Nasipadang = budget - harga_Nasipadang
    print("\n=== STRUK PEMBELIAN ===")
    print("Nama       :", nama)
    print("Menu       :", pilihan_menu)
    print("Total      :", total_Nasipadang)
    print("Bayar      :", budget)
    print("Kembalian  :", kembalian_Nasipadang)
    
elif pilihan_menu == "Ayam bakar":
    print("Baiklah, tunggu sebentar")
    total_Ayambakar = harga_Ayambakar
    kembalian_Ayambakar = budget - harga_Ayambakar
    print("\n=== STRUK PEMBELIAN ===")
    print("Nama       :", nama)
    print("Menu       :", pilihan_menu)
    print("Total      :", total_Ayambakar)
    print("Bayar      :", budget)
    print("Kembalian  :", kembalian_Ayambakar)
    
elif pilihan_menu == "Pecel lele":
    print("Baiklah, tunggu sebentar")
    total_Pecellele = harga_Pecellele
    kembalian_Pecellele = budget - harga_Pecellele
    print("\n=== STRUK PEMBELIAN ===")
    print("Nama       :", nama)
    print("Menu       :", pilihan_menu)
    print("Total      :", total_Pecellele)
    print("Bayar      :", budget)
    print("Kembalian  :", kembalian_Pecellele)
    
elif pilihan_menu == "Nasi goreng special":
    print("Baiklah, tunggu sebentar")
    total_Nasigorengspecial = harga_Nasigorengspecial
    kembalian_Nasigorengspecial = budget - harga_Nasigorengspecial
    print("\n=== STRUK PEMBELIAN ===")
    print("Nama       :", nama)
    print("Menu       :", pilihan_menu)
    print("Total      :", total_Nasigorengspecial)
    print("Bayar      :", budget)
    print("Kembalian  :", kembalian_Nasigorengspecial)
    
elif pilihan_menu == "Ayam geprek":
    print("Baiklah, tunggu sebentar")
    total_Ayamgeprek = harga_Ayamgeprek
    kembalian_Ayamgeprek = budget - harga_Ayamgeprek
    print("\n=== STRUK PEMBELIAN ===")
    print("Nama       :", nama)
    print("Menu       :", pilihan_menu)
    print("Total      :", total_Ayamgeprek)
    print("Bayar      :", budget)
    print("Kembalian  :", kembalian_Ayamgeprek)
    
elif pilihan_menu == "Nasi campur":
    print("Baiklah, tunggu sebentar")
    total_Nasicampur = harga_Nasicampur
    kembalian_Nasicampur = budget - harga_Nasicampur
    print("\n=== STRUK PEMBELIAN ===")
    print("Nama       :", nama)
    print("Menu       :", pilihan_menu)
    print("Total      :", total_Nasicampur)
    print("Bayar      :", budget)
    print("Kembalian  :", kembalian_Nasicampur)
    
elif pilihan_menu == "Pentol":
    print("Baiklah, tunggu sebentar")
    total_Pentol = harga_Pentol
    kembalian_Pentol = budget - harga_Pentol
    print("\n=== STRUK PEMBELIAN ===")
    print("Nama       :", nama)
    print("Menu       :", pilihan_menu)
    print("Total      :", total_Pentol)
    print("Bayar      :", budget)
    print("Kembalian  :", kembalian_Pentol)
    




