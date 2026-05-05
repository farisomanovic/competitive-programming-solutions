# XXII Cantonal IT Competition ZDK (2017) 🏆

This folder contains my solutions to the problems from the **XXII Cantonal IT Competition for High School Students**, held at the Mixed Secondary School in Zavidovići, Bosnia and Herzegovina, on April 15, 2017.

## 📂 Problem Descriptions

Here are the translated descriptions of the five algorithmic tasks presented in the competition paper:

### Task 1: Adjacent Alphabet Letters
Write a program that takes a word as a string of lowercase letters of the English alphabet. Print how many adjacent letters according to the alphabet are in the entered word.
* **Input:** A single word consisting of lowercase English letters.
* **Output:** Number of adjacent alphabetical letters.
* **Example:** For the entered word `abakus`, the output should be 2, because the adjacent letters are `ab` and `ba`.

### Task 2: Fraction Addition
Write a program that will add two fractions entered in the form `a/b + c/d` or `m a/b + n c/d`. The output must be a fully simplified fraction `f/g`, a mixed number `e f/g`, or an integer `h` if that is the solution.
* **Input:** Two fractions in the specified format.
* **Output:** The result of the addition in its simplest form.
* **Examples:** * `3/8 + 1/8` -> output should be fully simplified fraction `1/2` (2/4 or 4/8 is not accepted).
  * `2 3/10 + 1 1/10` -> completely simplified mixed number should be `3 2/5`.
  * `3/8 + 5/8` -> output should be `1`.

### Task 3: Diophantine Equation
Solve the Diophantine equation of the form `ax + by = c` for variables `x` and `y` in the interval `x=[9..20]` and `y=[9..20]`. The program should take parameters `a`, `b`, and `c` as input, and determine and print the integer solutions for `x` and `y` within the mentioned interval.
* **Input:** Integer parameters `a`, `b`, and `c`.
* **Output:** Integer solutions for `x` and `y`.
* **Example:** For entered parameters `a = 35`, `b = 45`, and `c = 1000`, the solutions are: `x = 17` and `y = 9`.

### Task 4: Large Factorial
Write a program to calculate the factorial of a natural number `n`, where `1 <= n <= 100`.
* **Input:** Natural number `n`.
* **Output:** The factorial of `n` (`n!`). *(Note: As `n` can be up to 100, the result will vastly exceed standard data type limits, requiring BigInt arithmetic).*
* **Example:** For input `6`, the output should be `720`. For input `33`, the output is `8683317618811886495518194401280000000`.

### Task 5: Nearest Prime with Twin Digits
Write a program that, for an entered natural number `1 < n < 32767`, prints its nearest prime number that has at least two identical digits. Note, prime numbers are those that have only two divisors, 1 and themselves (2, 3, 5, 7, 11, 13, 17...). Possible cases are:
a) the entered number fulfills the condition (it is prime and has at least two identical digits),
b) the nearest prime meeting the condition is larger than the entered one,
c) the nearest prime meeting the condition is smaller than the entered one,
d) there are two closest prime numbers at the same distance (one smaller, one larger).
* **Input:** Natural number `n`.
* **Output:** The nearest prime number(s) satisfying the condition.
* **Examples:**
  * For entered number `n=98`, output is `n=101`.
  * For entered number `32707`, output is `32707`.
  * For `n=195`, output is `191 i 199`.

---
*Note: Descriptions are translated from the original Bosnian competition paper.*