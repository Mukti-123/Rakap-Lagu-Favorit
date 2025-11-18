# 🎵 Program Rekap Lagu Favorit

Aplikasi C++ untuk mengelola dan merekap daftar lagu favorit dengan fitur tracking jumlah pemutaran.

## 📋 Deskripsi Program

Program ini memungkinkan pengguna untuk:
- **Menginput lagu favorit** dengan judul dan jumlah pemutaran
- **Menampilkan semua lagu** yang telah diinput
- **Mencari lagu favorit** (lagu dengan jumlah diputar tertinggi)
- **Mengurutkan lagu** berdasarkan jumlah pemutaran (sedang dikembangkan)
- **Kelola data** dengan antarmuka menu interaktif


### Fitur yang Sudah Selesai (50%)
✅ **Menu Utama** - Navigasi antar fitur dengan pilihan menu 1-5  
✅ **Input Lagu Awal** - Memasukkan lagu favorit saat program dimulai (minimal 2 lagu)  
✅ **Input Lagu Baru** - Menambahkan lagu baru ke dalam daftar dinamis  
✅ **Tampilkan Semua Lagu** - Menampilkan daftar lengkap lagu dengan jumlah pemutaran  
✅ **Validasi Input** - Validasi untuk jumlah lagu awal minimal 2  
✅ **Cari Lagu Favorit** - Menampilkan lagu dengan jumlah diputar tertinggi

### Fitur yang Sedang Dikembangkan
⏳ **Urutkan Lagu** - Sorting menggunakan Bubble Sort (placeholder sudah ada)

### Fitur yang Belum Dimulai (50%)
 Implementasi lengkap Bubble Sort  
 Edit data lagu yang ada  
 Hapus lagu dari daftar  
 Simpan data ke file  
 Baca data dari file



### Contoh Alur Penggunaan
1. Jalankan program
2. Masukkan jumlah lagu awal (minimum 2)
3. Input judul dan jumlah diputar untuk setiap lagu
4. Pilih menu yang diinginkan:
   - **Pilihan 1**: Tambah Lagu - Menambahkan lagu baru
   - **Pilihan 2**: Tampilkan Semua Lagu - Melihat daftar semua lagu
   - **Pilihan 3**: Cari Lagu Favorit - Melihat lagu paling banyak diputar
   - **Pilihan 4**: Urutkan Lagu - Mengurutkan lagu (sedang dikembangkan)
   - **Pilihan 5**: Keluar - Keluar dari program

## Struktur Data

```cpp
const int MAX_LAGU = 100;           
string judul[MAX_LAGU];             
int diputar[MAX_LAGU];              
int jumlahLagu = 0;               



## Fungsi-Fungsi yang Tersedia

| Fungsi | Deskripsi |
|--------|-----------|
| `inputLagu()` | Menambahkan lagu baru ke daftar |
| `tampilkanLagu()` | Menampilkan semua lagu dengan nomornya |
| `cariFavorit()` | Mencari dan menampilkan lagu favorit |
| `bubbleSort()` | Placeholder untuk sorting (belum diimplementasikan) |
| `menu()` | Tampilkan menu utama dan proses pilihan pengguna |
| `main()` | Fungsi utama program |

## Spesifikasi Program

- **Bahasa Pemrograman**: C++
- **Platform**: Windows / Linux / macOS (cross-platform)
- **Kapasitas Maksimal**: 100 lagu
- **Input Minimal**: 2 lagu saat startup
- **Penyimpanan Data**: Hanya dalam RAM (tidak ada file persistence)

##  Catatan Penting

- Data hanya tersimpan selama program berjalan
- Jika program ditutup, semua data akan hilang
- Fitur save/load data ke file akan ditambahkan di update mendatang
- Sorting lagu akan segera diimplementasikan di versi selanjutnya

## Rencana Pengembangan Selanjutnya

- [ ] Implementasi Bubble Sort untuk mengurutkan lagu
- [ ] Fitur edit data lagu
- [ ] Fitur hapus lagu
- [ ] Simpan data ke file CSV/TXT
- [ ] Baca data dari file
- [ ] Pencarian lagu berdasarkan nama
- [ ] Statistik (rata-rata pemutaran, dll)



