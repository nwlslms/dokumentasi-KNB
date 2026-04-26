PIN = 1012
SALDO = 100000.00
transaksi = []

def main():
    benar = False
    input_PIN = int(input("MASUKKAN PIN: "))
    if input_PIN == PIN:
        benar = True
    while benar == False:
        print("PIN SALAH!")
        input_PIN = int(input("MASUKKAN PIN: "))
        if input_PIN == PIN:
            benar = True
    bypass = input("SUKSES!")
    menu()

def menu():
    while True:
        print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
        print("=================================")
        print("             BANKGA")
        print("=================================")
        print("1. Cek Saldo\n2. Setor Uang\n3. Tarik Uang\n4. Cek Mutasi\n5. Keluar")
        pilihan = input(">> ")
        if pilihan == '1':
            cek()
        elif pilihan == '2':
            setor()
        elif pilihan == '3':
            tarik()
        elif pilihan == '4':
            mutasi()
        elif pilihan == '5':
            break
        else:
            a = input("MASUKKAN INPUT YANG BENAR")

def cek():
    print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
    print("=================================")
    print("             BANKGA")
    print("=================================")
    print(f"SALDO SAAT INI: Rp {SALDO}")
    a = input("")

def setor():
    print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
    print("=================================")
    print("             BANKGA")
    print("=================================")
    uang = float(input("Masukkan nominal yang ingin disetor: "))
    bener = False
    if uang > 0:
        bener = True
    while bener == False:
        print("HARAP MASUKKAN NOMINAL DIATAS 0 RUPIAH")
        uang = float(input("Masukkan nominal yang ingin disetor: "))

        if uang > 0:
            bener = True
    global SALDO
    SALDO += uang
    print(f"Rp {uang} telah ditambahkan ke saldo utama.\nSaldo saat ini: Rp {SALDO}")
    mutasi_masuk = ["Masuk", uang, SALDO]
    transaksi.append(mutasi_masuk)
    a = input("")
        
def tarik():
    print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
    print("=================================")
    print("             BANKGA")
    print("=================================")
    ambil = float(input("Masukkan nominal yang ingin diambil: "))
    global SALDO
    bener = False
    if ambil > 0 and ambil <= SALDO:
        bener = True
    while bener == False:
        print("Harap perhatikan jumlah uang yang diambil!")
        ambil = float(input("Masukkan nominal yang ingin diambil: "))
        if ambil > 0 or ambil <= SALDO:
            bener = True
    SALDO = SALDO - ambil
    print(f"Sisa saldo saat ini: {SALDO}")
    mutasi_keluar = ["Keluar", ambil, SALDO]
    transaksi.append(mutasi_keluar)
    a = input("")

def mutasi():
    print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")
    print("=================================")
    print("             BANKGA")
    print("=================================")
    urutan = 1
    if len(transaksi) == 0:
        print("BELUM ADA MUTASI")
    else:
        for i in transaksi:
            print(f"Mutasi-{urutan}:")
            for j in i:
                print(j)
            urutan+=1
    a = input("")

if __name__ == '__main__':
    main()