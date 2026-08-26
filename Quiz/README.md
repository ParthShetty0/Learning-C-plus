# C++ Console Quiz Game

A lightweight, terminal-based multiple-choice quiz application built in C++.

## Core Functional Features

* **Question Bank & Multi-Option Display:** Iterates through a fixed set of questions and renders 4 multiple-choice options (`A`, `B`, `C`, `D`) for each using 2D array traversal.
* **Case-Insensitive Input Handling:** Automatically converts user input to uppercase (`toupper()`) to accept both lowercase (`a-d`) and uppercase (`A-D`) guesses seamlessly.
* **Instant Feedback & Correction:** Compares the user's guess against an answer key array after each question, providing immediate verification and revealing the correct option upon an incorrect answer.
* **Real-Time Score Tracking:** Dynamically increments a running score for every correct answer.
* **Percentage Performance Calculation:** Calculates and displays the final grade as a percentage using floating-point division (`(score / (double)total_questions) * 100`).

## Requirements & Execution

* **Language Standard:** C++11 or higher
* **Compilation:**
  ```bash
  g++ -o quiz main.cpp
  ./quiz
  