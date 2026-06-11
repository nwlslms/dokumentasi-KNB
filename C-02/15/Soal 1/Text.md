# 🍜 Soal 1 — Warung Makan Bu Sari

## Narasi

Bu Sari adalah pemilik warung makan kecil di pinggir jalan yang ramai. Setiap hari ia melayani puluhan pelanggan, tapi selama ini ia mencatat pesanan hanya di buku tulis — dan sering salah hitung kembalian. Anaknya, Andi, yang baru belajar programming, memutuskan untuk membuat **program kasir sederhana** agar ibunya tidak pusing lagi. Bantulah Andi menyelesaikan program tersebut!

---

## Deskripsi Program

Buatlah sebuah **console application** untuk sistem kasir warung makan Bu Sari. Program berjalan terus-menerus hingga pengguna memilih untuk keluar. Program memiliki **4 menu utama**.

---

## Menu & Fungsi yang Harus Ada

### Menu 1 — Lihat Daftar Menu Makanan
> Implementasikan menggunakan **array** dan **function**.

- Tampilkan daftar 5 makanan beserta harganya yang sudah di-*hardcode* ke dalam array.
- Gunakan fungsi `tampilkan_menu()` untuk menampilkan daftar tersebut.

### Menu 2 — Buat Pesanan
> Implementasikan menggunakan **input, array, loop, dan function**.

- Minta pengguna memasukkan nomor meja (1–10).
- Minta pengguna memilih hingga **3 item** dari daftar menu (berdasarkan nomor urut).
- Gunakan fungsi `buat_pesanan()` yang menerima parameter nomor meja.
- Hitung dan simpan total harga pesanan.

### Menu 3 — Proses Pembayaran
> Implementasikan menggunakan **input, output, if condition, pointer, dan function**.

- Minta pengguna memasukkan jumlah uang yang dibayarkan.
- Gunakan fungsi `proses_bayar(int total, int *kembalian)` yang menerima total harga dan **pointer** untuk menyimpan nilai kembalian.
- Jika uang kurang → tampilkan pesan kekurangan.
- Jika uang cukup/lebih → tampilkan kembalian dan ucapan terima kasih.

### Menu 4 — Keluar
- Tampilkan total pendapatan warung selama program berjalan, lalu keluar.

---

## Batasan

- Harga makanan bertipe `int` (dalam satuan Rupiah, tanpa desimal).
- Maksimal 3 item per pesanan.
- Nomor meja valid: 1–10. Jika di luar range, tampilkan pesan error dan minta ulang.
- Uang pembayaran tidak boleh negatif.
- Nama makanan maksimal 30 karakter.

---

## Contoh Input & Output

```
===== WARUNG MAKAN BU SARI =====
1. Lihat Daftar Menu
2. Buat Pesanan
3. Proses Pembayaran
4. Keluar
Pilih menu: 1

--- DAFTAR MENU ---
1. Nasi Goreng      - Rp 15000
2. Mie Ayam         - Rp 12000
3. Soto Ayam        - Rp 13000
4. Es Teh Manis     - Rp  5000
5. Jus Alpukat      - Rp 10000

Pilih menu: 2
Masukkan nomor meja (1-10): 3
Pilih item ke-1 (1-5): 1
Pilih item ke-2 (1-5): 4
Pilih item ke-3 (1-5, atau 0 untuk selesai): 0
Pesanan meja 3: Nasi Goreng, Es Teh Manis
Total: Rp 20000

Pilih menu: 3
Masukkan pembayaran: Rp 50000
Kembalian: Rp 30000
Terima kasih, Bu Sari senang melayani Anda! 😊

Pilih menu: 4
Total pendapatan hari ini: Rp 20000
Sampai jumpa!
```

---

## Nilai Tambah *(Opsional)*
- Validasi input non-angka (misalnya user mengetik huruf saat diminta angka).
- Simpan lebih dari 1 pesanan aktif sekaligus menggunakan array of struct.
