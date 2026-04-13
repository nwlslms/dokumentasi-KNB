kelas = {
    'Ngajar' : {
        'name' : 'Nawwal',
        'umur' : 20 
    },
    'Siswa 1' : {
        'name' : 'Ujang',
        'umur' : 5
    }
}

for orang, identitas in kelas.items():
    print(orang)

    for nama, umur in identitas.items():
        print(nama, umur)
