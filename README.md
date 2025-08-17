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

  * [ ] Translation *(in progress)*
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
g++ TransGeo_Calculator.cpp -o TransGeo_Calculator
./TransGeo_Calculator
```

Windows (MinGW/MSVC):

```bash
g++ TransGeo_Calculator.cpp -o TransGeo_Calculator.exe
TransGeo_Calculator.exe
```

---
## 📖 Usage
1. Run the program.
2. Choose from the main menu:
* Start Transformation → access transformation operations.
* About Developer → view app creator info.
* Exit → quit the app.
4. Select geometry type:
* Point
* Line (line transformations are under progress)
5. Select transformation type: translation, reflection, rotation, or dilation.
6. Input the required coordinates.
7. The program will display the transformed coordinates.

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

## 🤝 Contributing

Contributions are welcome!
Feel free to fork the repository, open issues, and submit pull requests to help improve this project.

---

## 📄 License

This project is licensed under the **GNU General Public License v3.0**.

---
