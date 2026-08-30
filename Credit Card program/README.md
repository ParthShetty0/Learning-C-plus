# Credit Card Validator (Luhn Algorithm)

A lightweight C++ console application that verifies credit card numbers using the **Luhn Algorithm** (also known as the "Modulus 10" algorithm).

---

## 📌 Features

- **Luhn Checksum Verification**: Validates card numbers by computing odd and even digit checksums according to the ISO/IEC 7812 standard.
- **Lightweight & Fast**: Built using standard C++ libraries (`<iostream>`, `<string>`) without external dependencies.

---

## ⚙️ How It Works

1. **Even Position Processing (`getSumEven`)**: Iterates from the second-to-last digit moving backwards, doubling every second digit. If doubling results in a two-digit number, `getdigit()` splits and sums the digits (e.g., $18 \rightarrow 1 + 8 = 9$).
2. **Odd Position Processing (`getSumOdd`)**: Iterates from the last digit moving backwards, directly summing the digits.
3. **Validation**: Adds both sums together. If `(Sum % 10 == 0)`, the card number is considered structurally **Valid**; otherwise, it is **Invalid**.

---

## 🚀 Getting Started

### Prerequisites
- A C++ compiler supporting C++11 or later (`g++`, `clang++`, or MSVC).

### Compilation
Compile the source file using `g++`:

```bash
g++ -std=c++17 -O2 main.cpp -o card_validator
```

### Execution
Run the generated executable:

```bash
./card_validator
```

---

## 🧪 Sample Usage

```text
Enter a Credit Card Number : 4012888888881881
Card Number is Valid
```

```text
Enter a Credit Card Number : 4012888888881882
Card Number is Invalid
```

---

## 📄 License
This project is open-source and available under the [MIT License](LICENSE).