# 🎓 Soal 3 — Rapor Digital Kelas Pak Budi

## Narasi

Pak Budi adalah wali kelas yang terkenal teliti. Setiap akhir semester, ia harus menghitung nilai rata-rata, mencari nilai tertinggi & terendah, dan menentukan kelulusan tiap siswa secara manual — pekerjaan yang melelahkan. Salah satu siswanya yang jago coding punya ide: *"Pak, biar saya buatkan programnya!"* Jadilah program **Rapor Digital** yang akan membantu Pak Budi. Tugasmu adalah mewujudkannya dalam bahasa C.

---

## Deskripsi Program

Buatlah **console application** untuk sistem pencatatan dan analisis nilai siswa. Program berjalan terus-menerus hingga pengguna memilih keluar. Program memiliki **5 menu utama**.

---

## Menu & Fungsi yang Harus Ada

### Menu 1 — Input Data Siswa
> Implementasikan menggunakan **input, array, loop, dan function**.

- Minta pengguna memasukkan: **nama siswa** dan **3 nilai** (Matematika, Bahasa Indonesia, IPA). Nilai bertipe `float`.
- Simpan data ke dalam array: `nama[MAX][50]`, `nilai[MAX][3]`.
- Gunakan fungsi `input_siswa()`.
- Maksimal **15 siswa**. Jika penuh, tampilkan pesan error.

### Menu 2 — Tampilkan Rapor Semua Siswa
> Implementasikan menggunakan **array, loop, function, dan pointer**.

- Tampilkan tabel: nama siswa, 3 nilai, rata-rata, dan status kelulusan.
- Gunakan fungsi `hitung_rata(float *nilai_siswa, int n, float *rata)` — gunakan **pointer** untuk mengembalikan nilai rata-rata.
- Status: **LULUS** jika rata-rata ≥ 70.0, **TIDAK LULUS** jika di bawah itu.

### Menu 3 — Cari Siswa
> Implementasikan menggunakan **input, array, loop, if condition, dan function**.

- Minta pengguna memasukkan nama siswa (atau sebagian nama).
- Gunakan fungsi `cari_siswa(char keyword[])`.
- Tampilkan semua siswa yang namanya mengandung keyword tersebut (case-insensitive opsional).
- Jika tidak ditemukan, tampilkan pesan yang sesuai.

### Menu 4 — Statistik Kelas
> Implementasikan menggunakan **array, loop, if condition, dan function**.

- Gunakan fungsi `statistik_kelas()`.
- Tampilkan:
  - Rata-rata kelas keseluruhan.
  - Nama siswa dengan nilai rata-rata **tertinggi**.
  - Nama siswa dengan nilai rata-rata **terendah**.
  - Jumlah siswa **lulus** dan **tidak lulus**.

### Menu 5 — Keluar
- Tampilkan pesan perpisahan dan total siswa yang telah diinput.

---

## Batasan

- Maksimal 15 siswa.
- Nilai tiap mata pelajaran: **0.0 – 100.0**. Jika di luar range, minta input ulang.
- Nama siswa maksimal 50 karakter.
- Jika belum ada siswa sama sekali, menu 2, 3, 4 menampilkan pesan "Belum ada data siswa."

---

## Contoh Input & Output

```
===== RAPOR DIGITAL KELAS PAK BUDI =====
1. Input Data Siswa
2. Tampilkan Rapor Semua Siswa
3. Cari Siswa
4. Statistik Kelas
5. Keluar
Pilih menu: 1
Nama siswa  : Rizky
Nilai MTK   : 85
Nilai B.IND : 78
Nilai IPA   : 90
Data Rizky berhasil disimpan!

Pilih menu: 1
Nama siswa  : Dewi
Nilai MTK   : 60
Nilai B.IND : 55
Nilai IPA   : 65
Data Dewi berhasil disimpan!

Pilih menu: 2
Nama            | MTK  | B.IND| IPA  | Rata  | Status
----------------|------|------|------|-------|----------
Rizky           | 85.0 | 78.0 | 90.0 | 84.3  | LULUS
Dewi            | 60.0 | 55.0 | 65.0 | 60.0  | TIDAK LULUS

Pilih menu: 3
Cari nama: riz
Ditemukan 1 siswa:
- Rizky | Rata-rata: 84.3 | LULUS

Pilih menu: 4
--- STATISTIK KELAS ---
Rata-rata kelas   : 72.2
Nilai tertinggi   : Rizky (84.3)
Nilai terendah    : Dewi (60.0)
Jumlah lulus      : 1 siswa
Jumlah tidak lulus: 1 siswa

Pilih menu: 5
Total siswa diinput: 2
Terima kasih, Pak Budi! Semoga murid-muridnya sukses. 🎓
```

---

## Nilai Tambah *(Opsional)*
- Urutkan tampilan rapor berdasarkan rata-rata tertinggi ke terendah (Bubble Sort).
- Ekspor ringkasan ke dalam format teks sederhana yang dicetak ke layar.
