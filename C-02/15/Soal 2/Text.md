# 📚 Soal 2 — Perpustakaan Kecil Pak Hendra

## Narasi

Pak Hendra mengelola perpustakaan kecil di kelurahannya. Koleksinya tidak banyak — hanya puluhan buku — tapi ia sering pusing ketika harus mencari buku tertentu atau mencatat siapa yang meminjam. Suatu hari, ia bertemu dengan murid kursus programming dan meminta tolong dibuatkan sistem pencatatan sederhana. **Kamu** adalah murid tersebut. Bisakah kamu membuatnya dalam bahasa C?

---

## Deskripsi Program

Buatlah **console application** untuk sistem manajemen perpustakaan mini. Program berjalan terus-menerus hingga pengguna memilih keluar. Program memiliki **5 menu utama**.

---

## Menu & Fungsi yang Harus Ada

### Menu 1 — Tambah Buku
> Implementasikan menggunakan **input, array, dan function**.

- Minta pengguna memasukkan: **judul buku** dan **nama pengarang**.
- Simpan ke dalam 2 array terpisah: `judul[MAX]` dan `pengarang[MAX]`.
- Status buku baru otomatis: **tersedia**.
- Gunakan fungsi `tambah_buku(char judul[], char pengarang[])`.
- Maksimal koleksi: **10 buku**. Jika penuh, tampilkan pesan error.

### Menu 2 — Tampilkan Semua Buku
> Implementasikan menggunakan **array, loop, dan function**.

- Tampilkan seluruh buku beserta: nomor urut, judul, pengarang, dan status (Tersedia / Dipinjam).
- Gunakan fungsi `tampilkan_buku()`.
- Jika belum ada buku, tampilkan pesan "Koleksi masih kosong."

### Menu 3 — Pinjam Buku
> Implementasikan menggunakan **input, array, if condition, dan function**.

- Minta pengguna memasukkan **nomor urut** buku yang ingin dipinjam.
- Gunakan fungsi `pinjam_buku(int index)`.
- Jika buku sudah dipinjam → tampilkan pesan bahwa buku tidak tersedia.
- Jika buku tersedia → ubah status menjadi "Dipinjam" dan tampilkan konfirmasi.

### Menu 4 — Kembalikan Buku
> Implementasikan menggunakan **input, array, if condition, pointer, dan function**.

- Minta pengguna memasukkan nomor urut buku yang dikembalikan.
- Gunakan fungsi `kembalikan_buku(int index, int *total_kembali)` — gunakan **pointer** untuk menghitung total buku yang pernah dikembalikan selama sesi ini.
- Jika buku statusnya sudah "Tersedia" (tidak sedang dipinjam) → tampilkan pesan error.

### Menu 5 — Keluar
- Tampilkan ringkasan: total buku, jumlah tersedia, jumlah dipinjam, lalu keluar.

---

## Batasan

- Maksimal 10 buku dalam sistem.
- Judul buku dan nama pengarang maksimal 50 karakter.
- Index buku dimulai dari 1 (tampilan), tapi array 0-based (internal).
- Validasi input: nomor urut harus di antara 1 hingga jumlah buku saat ini.

---

## Contoh Input & Output

```
===== PERPUSTAKAAN PAK HENDRA =====
1. Tambah Buku
2. Tampilkan Semua Buku
3. Pinjam Buku
4. Kembalikan Buku
5. Keluar
Pilih menu: 1
Judul buku  : Laskar Pelangi
Pengarang   : Andrea Hirata
Buku berhasil ditambahkan!

Pilih menu: 1
Judul buku  : Bumi Manusia
Pengarang   : Pramoedya Ananta Toer
Buku berhasil ditambahkan!

Pilih menu: 2
No | Judul              | Pengarang               | Status
---|--------------------|-------------------------|----------
1  | Laskar Pelangi     | Andrea Hirata           | Tersedia
2  | Bumi Manusia       | Pramoedya Ananta Toer   | Tersedia

Pilih menu: 3
Masukkan nomor buku yang ingin dipinjam: 1
Buku "Laskar Pelangi" berhasil dipinjam!

Pilih menu: 3
Masukkan nomor buku yang ingin dipinjam: 1
Maaf, buku tersebut sedang dipinjam.

Pilih menu: 5
--- RINGKASAN ---
Total buku      : 2
Tersedia        : 1
Dipinjam        : 1
Total dikembalikan sesi ini: 0
Sampai jumpa, Pak Hendra!
```

---

## Nilai Tambah *(Opsional)*
- Tambahkan fitur **Cari Buku** berdasarkan sebagian judul menggunakan `strstr()`.
- Catat nama peminjam menggunakan array string tambahan.
