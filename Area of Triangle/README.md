================================================================================
            RIGHT-ANGLED TRIANGLE CALCULATOR - C++ FUNDAMENTALS
================================================================================

1. OVERVIEW
-----------
This program calculates two geometric properties of a right-angled triangle 
from user-provided base and height:
  * Area
  * Hypotenuse length


2. CORE FUNDAMENTALS DEMONSTRATED
---------------------------------
* Standard I/O (<iostream>):
  - std::cout / << (Stream Insertion) : Prints prompts and results to console.
  - std::cin  / >> (Stream Extraction): Captures user input from terminal.

* Data Types & Precision:
  - float  : Used for 'base' and 'height' (single-precision floating point).
  - double : Used for 'area' and 'hypotenuse' (double-precision floating point).

* Math Library (<cmath>):
  - std::pow(x, y) : Computes x raised to power y (e.g., base^2).
  - std::sqrt(x)   : Computes the non-negative square root of x.

* Arithmetic & Formulas:
  - Area formula               : (base * height) / 2
  - Pythagorean theorem        : hypotenuse = sqrt(base^2 + height^2)

* Program Structure:
  - int main() : Standard entry point of a C++ application.
  - return 0;  : Signals successful program termination to the OS.


3. COMPILATION & EXECUTION
--------------------------
Using GCC / G++:
  1. Compile:
       g++ main.cpp -o triangle_calc

  2. Run:
       ./triangle_calc        (Linux / macOS)
       triangle_calc.exe      (Windows)


4. SAMPLE RUN
-------------
Input:
  Enter base of Triangle : 3
  Enter height of Triangle : 4

Output:
  Right Angled Triangle Calulator
  Area of Triangle is 6 cm
  The Hypotenuse of Triangle is of length 5 cm
================================================================================