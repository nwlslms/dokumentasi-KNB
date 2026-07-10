keluarga = {
	"Ayah": {
		"Nama": "Ucup",
		"Umur": 35
	},
	"Ibu": {
		"Nama": "Marsinah",
		"Umur": 32
	},
	"Anak": {
		"Nama": "Kutsay",
		"Umur": 10
	}
}
keluarga["Ayah"]["Nama"]= "Surucup"

keluarga["Anak"]["Sekolah"] = "SD"

del keluarga["Anak"]["Sekolah"]

for keys, values in keluarga.items():
	print(keys)
	for subkey, subval in values.items():
		print(subkey, subval)