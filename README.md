# TransGeo-Calculator

Kalkulator **Transformasi Geometri** berbasis **C++ CLI (Command Line Interface)**.
Aplikasi ini dibuat sebagai tugas Matematika Lanjut untuk membantu menghitung berbagai operasi transformasi geometri sederhana pada titik maupun garis.

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
git clone https://github.com/username/kalkulator-transgeo.git
cd kalkulator-transgeo
```

### 2. Compile program

Gunakan compiler C++ (contoh: `g++`):

```bash
g++ main.cpp -o transgeo
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

* [x] Transformasi **titik** (translasi, refleksi, rotasi, dilatasi)
* [ ] Transformasi **persamaan garis (refleksi, rotasi, dilatasi)** → *masih dalam tahap pengembangan*

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
* Untuk pengembangan lebih lanjut, fitur **visualisasi grafik** dan **transformasi persamaan garis** akan menjadi fokus pengembangan berikutnya.

---

⚡ Selamat mencoba **Kalkulator Transgeo**!

---


Mau saya bikinkan juga **versi README yang lebih ditujukan untuk open-source di GitHub** (misalnya dengan bagian *Contributing*, *License*, dan *Future Roadmap*) biar orang lain bisa ikut gabung ngembangin?
