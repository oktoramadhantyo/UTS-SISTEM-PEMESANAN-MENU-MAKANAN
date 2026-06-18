# Sistem Pemesanan Menu Makanan - Kelompok 4

Proyek ini adalah aplikasi pemesanan menu makanan dan minuman berbasis CLI (Command Line Interface) yang ditulis dalam bahasa pemrograman C. Aplikasi ini dibuat sebagai bagian dari Ujian Tengah Semester (UTS) mata kuliah Praktikum Dasar Pemrograman (Daspro).

## 🚀 Fitur Utama

- **Pemesanan Makanan**: Menyediakan 7 pilihan menu makanan (Nasi Goreng Ayam, Nasi Goreng Bakso, Nasi Goreng Spesial, Mie Ayam Pangsit, Mie Ayam Bakso, Mie Ayam Komplit, dan Sate).
- **Tingkat Kepedasan**: Khusus untuk menu Nasi Goreng (pilihan 1-3), pengguna dapat memilih tingkat kepedasan (Pedas, Sedang, Tidak Pedas).
- **Pemesanan Minuman**: Menyediakan 2 pilihan menu minuman (Es Teh, Es Jeruk).
- **Struk & Total Harga**: Menampilkan daftar pesanan yang dipilih beserta perhitungan total harga yang harus dibayar.
- **Pemesanan Ulang (Looping)**: Opsi untuk melakukan pemesanan baru setelah transaksi selesai tanpa perlu merestart program.

## 📋 Struktur Repositori

Di dalam repositori ini terdapat file-file berikut:
* `UTS DASPRO KELOMPOK 4.C` - Kode sumber utama program dalam bahasa C.
* `UTS PRAKTIKUM DASPRO_KELOMPOK 4_A.pdf` - Dokumentasi/laporan terkait tugas UTS Kelompok 4.
* `README.md` - Panduan dokumentasi proyek ini (file ini).

## 🛠️ Cara Menjalankan Program

Untuk menjalankan program ini di komputer Anda, pastikan Anda telah menginstal compiler C (seperti GCC).

### 1. Kloning Repositori
```bash
git clone https://github.com/oktoramadhantyo/UTS-SISTEM-PEMESANAN-MENU-MAKANAN.git
cd UTS-SISTEM-PEMESANAN-MENU-MAKANAN
```

### 2. Kompilasi Kode C
Gunakan compiler GCC untuk melakukan kompilasi file `UTS DASPRO KELOMPOK 4.C`:
* **Di Windows (PowerShell/CMD):**
  ```bash
  gcc "UTS DASPRO KELOMPOK 4.C" -o UTS_Daspro_Kelompok4.exe
  ```
* **Di Linux/macOS:**
  ```bash
  gcc "UTS DASPRO KELOMPOK 4.C" -o UTS_Daspro_Kelompok4
  ```

### 3. Jalankan Program
* **Di Windows:**
  ```bash
  ./UTS_Daspro_Kelompok4.exe
  ```
* **Di Linux/macOS:**
  ```bash
  ./UTS_Daspro_Kelompok4
  ```

## 💻 Contoh Penggunaan Program

Saat dijalankan, program akan memandu Anda dengan langkah-langkah berikut:
1. Meminta jumlah makanan yang ingin dipesan.
2. Memilih nomor menu makanan beserta opsi kepedasan jika Anda memilih nasi goreng.
3. Meminta jumlah minuman yang ingin dipesan beserta nomor menunya.
4. Menampilkan struk pesanan secara detail beserta total harga.
5. Menawarkan apakah ingin membuat pesanan baru (`y`/`n`).

---
Dibuat dengan ❤️ oleh **Kelompok 4**.
