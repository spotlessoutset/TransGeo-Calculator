# TransGeo Calculator

A simple **C++ CLI (Command Line Interface)** program for basic **geometric transformations**.
This tool helps calculate transformations of **points** and **lines** in 2D geometry.

---

## ✨ Features

* **Point Transformations**

  * [x] Translation
  * [x] Reflection (X-axis, Y-axis, Y=X, Y=-X, X=k, Y=k)
  * [x] Rotation (90° CCW, 180°, 90° CW)
  * [x] Dilation (scaling with respect to a center)

* **Line Transformations (ax + by + c = 0)**

  * [ ] Translation
  * [ ] Reflection *(in progress)*
  * [ ] Rotation *(in progress)*
  * [ ] Dilation *(in progress)*

---

## 🚀 Getting Started

### Clone Repository

```bash
git clone https://github.com/spotlessoutset/TransGeo-Calculator.git
cd TransGeo-Calculator
```

### Compile & Run

Linux / macOS:

```bash
g++ TransGeo_Calculator.cpp -o transgeo
./transgeo
```

Windows (MinGW/MSVC):

```bash
g++ TransGeo_Calculator.cpp -o transgeo.exe
transgeo.exe
```

---

## 📌 Roadmap

* [ ] Complete line transformation algorithms
* [ ] Release English version
* [ ] Develop a web-based version with UI
* [ ] Add multi-input & file output support

---

## 📝 Notes

* The program is **terminal-based** (no graphics).
* Future development will focus on **English version, visualization** and **line transformations**.

---

## 📄 License

This project is licensed under the **GNU General Public License v3.0**.

---
