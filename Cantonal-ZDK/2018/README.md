# XXIII Cantonal IT Competition ZDK (2018) 🏆

This folder contains my solutions to the problems from the **XXIII Cantonal IT Competition for High School Students**, held at the Gymnasium "Edhem Mulabdić" in Maglaj, Bosnia and Herzegovina, on April 21, 2018.

## 📂 Problem Descriptions

Here are the translated descriptions of the five algorithmic tasks presented in the competition paper:

### Task 1: Max, Min, or Equal
Write a program to input numbers `x` and `y` from the set of integers (from -30000 to 30000). Print the maximum and minimum values of the read numbers. If the numbers are equal, just print that they are equal.
* **Input:** Two integers `x` and `y`.
* **Output:** Maximum and minimum value, or a message that they are equal.
* **Examples:** * For numbers `x=2 y=13`, output should be: `max = 13 i min = 2`.
  * For numbers `x=20 y=20`, output should be: `brojevi su jednaki`.

### Task 2: Reverse Array
Write a program that reads the number of array elements `n` and the elements of that array from the set of natural numbers. Print the read array in reverse order.
* **Input:** Number of elements `n`, followed by `n` natural numbers.
* **Output:** The array printed in reverse order.
* **Example:** For the entered array of `n=4` elements: `5, 6, 9, 8`, the output should be `8, 9, 6, 5`.

### Task 3: Quadratic Equation
Write a program that will solve quadratic equations. Input coefficients `a`, `b`, and `c` of the equation a*x² + b*x + c = 0. Print both solutions of the quadratic equation. Note: If the solutions are imaginary, print both solutions, displaying both the real and imaginary parts.
* **Input:** Coefficients `a`, `b`, and `c`.
* **Output:** Solutions `x1` and `x2` (including real and imaginary parts if applicable).
* **Examples:** * For entered coefficients `a=1`, `b=1` and `c=-12`, solutions are `x1= 3 i x2= - 4`.
  * For entered coefficients `a=1`, `b=4` and `c=5`, solutions are `x1Re= -2 x1Im= 1 i x2Re= -2 x2Im= -1`.

### Task 4: Divisibility Sum
Write a program that reads a natural number `n` and three natural numbers `a`, `b`, and `c` that are smaller than `n`. Print the sum of all numbers from `1` to `n`, including `n`, that are divisible by either number `a`, or number `b`, or both read numbers `a` and `b`, but are not divisible by the third number `c`.
* **Input:** Natural number `n` and three natural numbers `a`, `b`, and `c`.
* **Output:** The sum of numbers satisfying the described divisibility conditions.
* **Example:** For entered number `n=100` and numbers `a=5`, `b=7` and `c=11`, the sum is `1548`.

### Task 5: Twin Primes
Write a program that, for an entered natural number `1 < n < 32767` and a natural number `a` less than 20, prints the first `a` pairs of twin primes greater than the entered number `n`.
* **Input:** Natural number `n` and natural number `a`.
* **Output:** The first `a` pairs of twin primes greater than `n`.
* **Example:** For entered number `n=100` and `a=4` output should be: `(101, 103), (107, 109), (137, 139), (149, 151)`.

---
*Note: Descriptions are translated from the original Bosnian competition paper.*