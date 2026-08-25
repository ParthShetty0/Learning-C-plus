readme_content = """# Rock Paper Scissors (C++)

A lightweight, console-based implementation of the classic Rock Paper Scissors game written in C++.

---

## 🎮 Features

- **Interactive User Input**: Prompts the player to select Rock (`R`), Paper (`P`), or Scissor (`S`).
- **Input Validation**: Uses an input-validation loop to ensure only valid moves are accepted.
- **Randomized AI Opponent**: Uses pseudo-random generation seeded with the system clock (`rand()` / `time(0)`) to generate computer moves.
- **Game Outcome Engine**: Accurately computes outcomes according to standard rules:
  - **Rock** beats **Scissors**
  - **Scissors** beats **Paper**
  - **Paper** beats **Rock**
  - Matching choices result in a **Tie**
- **Round Feedback**: Clearly displays both player and computer selections along with the final outcome.

---

## 🛠️ Controls

| Key | Action |
|:---:|:---|
| `R` / `r` | Choose **Rock** |
| `P` / `p` | Choose **Paper** |
| `S` / `s` | Choose **Scissor** |

---

## 🚀 Build & Run

### Prerequisites
- GCC / G++ compiler (or any standard C++11+ compatible compiler)

### Compilation
```bash
g++ -std=c++11 -o rps main.cpp