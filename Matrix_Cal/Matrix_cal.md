# Matrix Cal

A **menu-driven C++ matrix calculator** that supports multiple matrix operations using letter-based matrix storage (A, B, C...).

It allows users to:
- Define multiple matrices
- View stored matrices
- Perform operations using expressions like `A+B`, `A-B`, `A*B`

---

# 🚀 Features

- Store up to 26 matrices (A–Z)
- Supports:
  - Matrix Addition
  - Matrix Subtraction
  - Matrix Multiplication
- Interactive expression-based input
- Automatic dimension validation
- Formatted matrix display using `iomanip`

---

# 📊 Supported Operations

## ➕ Addition
\[
A + B
\]
- Requires same dimensions

---

## ➖ Subtraction
\[
A - B
\]
- Requires same dimensions

---

## ✖️ Multiplication
\[
A \times B
\]
- Condition:
\[
A.columns = B.rows
\]

---

    return 0;
}
