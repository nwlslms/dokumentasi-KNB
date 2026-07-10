# PY-03: Session 8
> Review
- [x] Loop
	- For loop
	- While loop
> Main Course
- [x] List
	Urut, bisa diubah, bisa ganda
	`Lists = ["Pisang", "Semangka", "Apel"]`
	- Access
		Pertama = Indeks ke - 0
		- Positive and Negative Access
			Menampilkan anggota list
			```py
			thisList = ["Apel", "Semangka", "Pisang"]
			print(thisList[1])
			print(thisList[-1])
			```
		- `list[x:y]`
			Menampilkan list baru
			```py
			thisList = ["Apel", "Semangka", "Pisang"]
			print(thisList[1:2]) # Indeks x sampai y-1
			```
	- Add List
		- `.append()`
			Menambahkan item ke list
		- `.insert(pos, Item)`
			Menambahkan item ke list pada posisi tertentu
		- `.extend(List)`
			Menambahkan anggota list ke list lain.
		- `listBaru = list1 + list2`
	- Remove
		- `.remove(item)`
			Menghapus berdasarkan item
		- `.pop(pos)`
			Menghapus berdasarkan index
		- `del list`
			Menghapus anggota / list
	- Trace
		- Loop by index
		- Loop by list
	- Copy
	Karena Python reference, maka kita perlu mengcopy.
		- `listBaru = listLama.copy()`
        - `listBaru = listLama[:]`

- [x] Tuple
	Urut, tidak bisa diubah, bisa ganda
	```py
	mytuple = ("apple", "banana", "cherry")
	```
	- Access
		Sama seperti List
	- Update
		```py
		x = (3.14, 9.8)
		y = list(x)
		y.append(123)
		x = tuple(y)

		#or
		y = (123)
		x += y
		```
	- Remove
		Sama seperti update
	- Trace
		Sama seperti List
	- Copy
		Gabungan list dan update tuple

- [x] Dictionary
	Urut, bisa diubah, tidak boleh ada yang sama
	```py
	kamus = {
		"Aku": "I",
		"Kamu": "You
	}
	```
	`Key:Value`
	- Access
		- Panggil dengan `Key`
	- Update
		- Mengubah langsung
		- `.update({key:value})`
		- `dict[Key] = Value`
	- Delete
		- `.pop(Key)` = Hapus berdasarkan Key
		- `.popitem()` = Hapus Key dan Value terakhir
		- `del dict` = Menghapus sampai memori
		- `.clear()` = Mengosongkan dictionary
	- Trace
		- Trace key
			- `.keys()`
			- `for x in dict: print(x)`
		- Trace Value
			- `.values()`
			- `for x in dict: print(dict[x])`
		- Both
			- `for x, y in dict.items(): print(x, y)`
	- Copy
		= `.copy()`

- [x] Nested list, tuple, and dictionary
	- List
		```py
		list = [
			[1, 2, 3],
			[4, 5, 6],
			[7, 8, 9]
		]
		list[2][1] = 10
		list[2].insert(1, 5)
		del list[2][2]
		print(list)

		for x in list:
			for y in x:
				print(y, end="")
			print()
		```
	- Dictionary
		```py
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

		for key, values in keluarga:
			print(key)
			for subkey, subval in values:
				print(subkey, subval)
		```
> Next Session
> Review
