# TransGeo Calculator

Kalkulator **Transformasi Geometri** berbasis **C++ CLI (Command Line Interface)**.
Aplikasi ini dibuat untuk membantu menghitung operasi transformasi geometri sederhana pada **titik** maupun **persamaan garis**.

---

## ✨ Fitur

* **Translasi (pergeseran titik/garis)**
* **Refleksi (pencerminan titik)**

  * Terhadap sumbu-X
  * Terhadap sumbu-Y
  * Terhadap garis y = x
  * Terhadap garis y = -x
  * Terhadap garis x = k
  * Terhadap garis y = k
* **Rotasi (perputaran titik)**

  * 90° berlawanan arah jarum jam
  * 180°
  * 90° searah jarum jam
* **Dilatasi (perkalian skala terhadap titik pusat tertentu)**

---

## 📦 Cara Instalasi & Menjalankan

### 1. Clone repository

```bash
git clone https://github.com/spotlessoutset/TransGeo-Calculator.git
cd TransGeo-Calculator
```

### 2. Compile program

Gunakan compiler C++ (contoh: `g++`):

```bash
g++ TransGeo_Calculator.cpp -o transgeo
```

### 3. Jalankan aplikasi

```bash
./transgeo
```

---

## 📖 Cara Penggunaan

1. Jalankan program.
2. Pilih menu utama:

   * **Mulai mentransformasi** → masuk ke menu operasi transformasi.
   * **Tentang pengembang** → melihat informasi pembuat aplikasi.
   * **Keluar** → menutup aplikasi.
3. Pilih jenis geometri:

   * **Titik**
   * **Garis** *(fitur transformasi garis masih terbatas)*
4. Pilih jenis transformasi: translasi, refleksi, rotasi, atau dilatasi.
5. Masukkan nilai koordinat yang diminta.
6. Program akan menampilkan hasil koordinat bayangan.

---

## 🛠️ Teknologi

* **Bahasa:** C++
* **Compiler:** g++ (GCC), MinGW, atau MSVC
* **Platform:** Windows, Linux, macOS (CLI)

---

## 🚧 Status Pengembangan

### ✅ Titik

* [x] Translasi
* [x] Refleksi (sumbu-X, sumbu-Y, garis y=x, y=-x, x=k, y=k)
* [x] Rotasi (90° CCW, 180°, 90° CW)
* [x] Dilatasi (skala terhadap pusat tertentu)

### 🔄 Persamaan Garis

* [ ] Translasi
* [ ] Refleksi (dalam pengembangan)
* [ ] Rotasi (dalam pengembangan)
* [ ] Dilatasi (dalam pengembangan)

---

## 👨‍💻 Tentang Pengembang

* Nama: **Ayyash Syauqi Syahadah**
* Kelas: XI-3
* Hobi: Voli, Programming
* Instagram: [@ayyasyauqi](https://instagram.com/ayyasyauqi)
* Email: [ayyash.syauqi@smancmbbs.sch.id](mailto:ayyash.syauqi@smancmbbs.sch.id)

---

## 📝 Catatan

* Program masih berbasis **terminal** tanpa visualisasi grafik.
* Untuk pengembangan lebih lanjut, fitur **visualisasi grafik** dan **transformasi persamaan garis (refleksi, rotasi, dilatasi)** akan menjadi fokus utama.
---
## Next Features
* Fitur **jumlah masukan data** : User dapat menambahkan banyak data dengan satu fungsi transformasi
* Fitur **Keluaran data**: semua data yang diinput dapat dikeuarkan menjadi file

---

⚡ Selamat mencoba **TransGeo Calculator**!

---
