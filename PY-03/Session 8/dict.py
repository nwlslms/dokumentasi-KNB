anggota = {}
urutan = 1
while 1:
    nama = input("Nama: ")
    if nama == "0":
        break
    status = input("Status: ")
    if status == "Pelajar":
        urutan += 1
        status += (f" {urutan}")
    anggota[status] = nama

for keys in anggota:
    print(f"{keys} = {anggota[keys]}")