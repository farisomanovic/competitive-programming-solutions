# XVIII Cantonal IT Competition ZDK (2013) 🏆

This folder contains my solutions to the problems from the **XVIII Cantonal IT Competition for High School Students**, held at the Mixed Secondary School "NORDBAT-2" in Vareš, Bosnia and Herzegovina, on April 20, 2013.

## 📂 Problem Descriptions

Here are the translated descriptions of the five algorithmic tasks presented in the competition paper:

### Task 1: Piecewise Function
Write a program that calculates y, for an entered variable x (type real), according to the formula:

y(x) = 
  -10, if x < 0
  1000 * x, if 0 <= x < 1
  10 * x, if 1 <= x < 10
  x / 10, if x >= 10

* **Example:** For x=7.7, the value of the function y is: y(7.7) = 77.

### Task 2: Array Sum Parity and Extrema
Write a program to enter k integer elements of a one-dimensional array. If the sum of all entered elements is even, print the largest entered element. If the sum is odd, print the smallest entered element.
* **Example:** For k=3 and entered elements: 1, 4, and 7, the array element that needs to be printed is 7, because the sum of all entered elements is even (1+4+7=12), and 7 is the largest element of the array.

### Task 3: Nested Square Roots Product
Write a program that for natural numbers n and k (n and k < 1000) calculates the expression (the printed result must be accurate to 3 decimals):

r = (1 / √k) * (1 / √(k + √k)) * (1 / √(k + √(k + √k))) * ... * (1 / √(k + √(k + ... + √k)))

(The formula consists of n multiplying terms, where the number of nested square roots increases up to n).
(Referee to the picture for better visualization of the expression.)
* **Example:** For k=2 and n=3, r = 0.1951.

### Task 4: Day of the Year
Write a program that prints which ordinal day of the year it is based on the entered date in the form day, month, and year.
* **Example:** For the entered data: day = 25, month = 3, and year = 2012, the ordinal number of the day in the year is: d = 85.

### Task 5: Palindromic Primes in an Interval
Write a program to enter a natural number n < 10000. Print all palindromic prime numbers in the interval [n, 2*n]. Note: palindromic prime numbers are those that have only two divisors, the number 1 and themselves, and are read the same from left to right and from right to left.
* **Example:** For the entered number n=7, palindromic prime numbers from the interval [7,14] are: 7 and 11. Or for the entered number n=80, i.e., the interval [80,160], the output should be: 101, 131, and 151.

---
*Note: Descriptions are translated from the original Bosnian competition paper.*