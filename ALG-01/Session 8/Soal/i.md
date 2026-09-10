# Soal 9 - Harga Tiket Wahana

## Deskripsi
Sebuah taman bermain memiliki aturan harga tiket:

- Anak-anak (umur < 12 tahun): Rp25.000
- Dewasa (umur ≥ 12 tahun): Rp50.000

Jika datang pada akhir pekan, harga tiket naik sebesar 20%.

Hitung harga tiket yang harus dibayar oleh seorang pengunjung.

## Constraint
- 1 ≤ umur ≤ 100
- akhir_pekan ∈ {0,1}

## Input
Dua baris:

Baris pertama berisi umur pengunjung.

Baris kedua berisi status akhir pekan:
- `1` = akhir pekan
- `0` = hari biasa

### Contoh Input
```txt
10
1
```

## Output
```txt
30000
```

## Penjelasan
Umur 10 tahun termasuk anak-anak.

Harga dasar = Rp25.000.

Karena akhir pekan, harga naik 20%.

Total = 25.000 × 120% = 30.000.

---