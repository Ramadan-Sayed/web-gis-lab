# 📐 C/C++ Geometric, Binary & Prime Patterns Library

> A comprehensive algorithmic laboratory and modular code collection for generating complex console-based geometric patterns, binary matrices, symmetric palindrome structures, and prime-number architectural grids.

---

## 🎯 About The Repository

This repository serves as a personal technical sandbox and code archive demonstrating advanced algorithmic logic, state management, and mathematical pattern rendering in **C/C++**. It covers a wide spectrum of visual structures ranging from basic numeric triangles to advanced binary frames, exponential palindromes, and prime-driven diagonals.

---

## 📂 Repository Structure

```text
web-gis-lab/
├── core/
│   ├── star-patterns.cpp      # Master implementation containing all geometric and prime pattern functions
│   └── star-patterns.exe      # Compiled executable binary
├── c-programming.c            # General C logic and foundational exercises
├── Data Structure.c           # Core data structures implementation
└── README.md                  # Project documentation
```

## 🧩 Comprehensive Function Index

The core engine (`star-patterns.cpp`) is structured into distinct algorithmic categories:

### 1. Binary & Matrix Patterns
* **`binary_pyramid()` / `reverse_binary_pyramid()`**: Centered binary pyramids with continuous row-to-row alternating states (`0` & `1`).
* **`binary_right_rhombus()` / `binary_left_rhombus()` / `binary_rhombus()`**: Shifted and integrated binary parallelograms.
* **`binary_hollow_square()` / `binary_hollow_rectangle()`**: Bordered rectangular and square grids with an alternating binary frame and empty core.
* **`binary_plus_sign()`**: Centered cross pattern driven by binary toggling.

### 2. Palindrome & Exponential Character Patterns
* **`palindrome_rhombus()` (Left, Right, & Full)**: Symmetric alphabet-based rhombuses requiring strict **Odd** number validation (`goto start`).
* **`palindrome_number_exponential_increasing()`**: Row elements scaling exponentially via $2^i$ with mirrored character mapping.
* **`symmetric_palindrome_matrix()`**: Complex multi-directional character reflections.

### 3. Prime Number Architectural Grids
* **`prime_plus_sign()`**: Centered cross ("Plus") pattern populated strictly by sequential prime numbers (`is_prime()`).
* **`prime_number_square()` / `prime_number_rhombus()`**: Geometric grids mapped dynamically using prime sequences.
* **`prime_main_diagonal_square()` / `prime_anti_diagonal_square()` / `prime_both_diagonal_square()`**: Diagonal matrix layouts driven by prime numbers.

---

## ⚙️ Compilation & Execution

### Prerequisites
* GCC Compiler (or any standard C/C++ compiler supporting C99/C11)
* Git terminal

### Compile and Run
Navigate to the core directory and compile using GCC:
```bash
cd core
g++ star-patterns.cpp -o star-patterns -lm
./star-patterns
```


---

## 💻 Code Architecture Sample

A snapshot showcasing the modular design and state-managed binary logic used across the library:

```cpp
void binary_hollow_square(){
    int side, a = 1;
    printf("Enter a side of square: ");
    scanf("%d", &side);
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++){
            if (i == 0 || i == side - 1 || j == 0 || j == side - 1)
                printf("%d  ", a);
            else
                printf("   ");
            a = !a;
        }
        a = i % 2;
        printf("\n");
    }
}
```


---

## 📌 Commit Standards

This repository follows **Conventional Commits** specifications to maintain a clean and descriptive version history:
* `feat:` for introducing new geometric or prime pattern modules.
* `refactor:` for optimizing loop boundaries and cleaning up legacy logic.
* `fix:` for resolving validation checks or rendering alignment bugs.

---

## 👤 Author

* **رمضان الفرجاني (Ramadan El-Ferjani)**
* GitHub: [@Ramadan-Sayed](https://github.com/Ramadan-Sayed/web-gis-lab)