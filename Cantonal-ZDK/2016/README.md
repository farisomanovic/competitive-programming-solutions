# XXI Cantonal IT Competition ZDK (2016) 🏆

This folder contains my solutions to the problems from the **XXI Cantonal IT Competition for High School Students**, held in Visoko, Bosnia and Herzegovina, on April 16, 2016.

## 📂 Problem Descriptions

Here are the translated descriptions of the five algorithmic tasks presented in the competition paper:

### Task 1: Armstrong Numbers
A three-digit number is an Armstrong number if it is equal to the sum of the cubes of its digits. For example: the number 153 is an Armstrong number because 153 = 1^3 + 5^3 + 3^3. Write a program that reads two natural numbers a and b (a < b) from standard input. If a and b are three-digit numbers, it should print all Armstrong numbers, as well as the total count of Armstrong numbers in the given interval. If a and/or b are not three-digit numbers, print the message: "greska" (error).
* **Input:** Natural numbers a and b (a < b).
* **Output:** Armstrong numbers from the interval [a, b], the total count of found Armstrong numbers, or the message "greska".
* **Example:** For input `200 300`, output is `, na zadatom intervalu Armstrongovih brojeva ima: 0`. For input `400 500`, output is `407, na zadatom intervalu Armstrongovih brojeva ima: 1`.

### Task 2: Multiplicative Persistence
Let n be a natural number, and let n1 be the product of the digits of number n, n2 the product of the digits of number n1, n3 the product of the digits of number n2, etc. The smallest number k for which nk is a single-digit number is theoretically called the *multiplicative persistence* of number n. Write a program that calculates and prints the multiplicative persistence of an entered number.
* **Input:** Natural number n for which we want to calculate the multiplicative persistence.
* **Output:** Multiplicative persistence of number n.
* **Example:** For input 336, the steps are n1=3\*3\*6=54, n2=5\*4=20, n3=2\*0=0. The output is 3.

### Task 3: Binary Gap
A binary gap within a positive integer n is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of n. For example, number 9 has a binary representation of 1001 and contains a binary gap of length 2. The number 529 has a binary representation of 1000010001 and contains two binary gaps: one of length 4 and the other of length 3. Write a program that prints the largest gap for a given natural number n.
* **Input:** Natural number n.
* **Output:** Maximal binary gap of the entered number.
* **Example:** For input 9, output is 2. For input 8, output is 0.

### Task 4: Infinite Sequence Index
Let an infinite sequence of numbers be given that looks like this: 1, 1, 2, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 4, 5, 1, 2, 3, .... Write a program that finds which number is located at index n in this sequence.
* **Input:** The index of the number to be found (1 <= n <= 10^14).
* **Output:** The number found at the requested position in the sequence.
* **Example:** For input 3, output is 2. For input 10, output is 4.

### Task 5: Matrix Row Sums
Write a program that reads from standard input the dimensions and contents of a matrix of integers, as well as an integer X representing the sequence number of a row. The program should then print the sequence numbers of all rows that have the same sum as the row with sequence number X. The matrix has maximum dimensions of 20x20. For different output cases format, see the given example.
* **Input:** Matrix dimensions (0 < m,n <= 20), elements of the matrix, the sequence number of a row (0 < X <= 20).
* **Output:** Sequence numbers of rows that have the same sum as row X.
* **Example:** * Input: `3 3 \n 2 2 0 \n 2 1 1 \n 1 2 1 \n 1` -> Output: `2 3`. 
  * Input: `2 2 \n 3 3 \n 2` -> Output: `greska` (error due to invalid row index).

---
*Note: Descriptions are translated from the original Bosnian competition paper.*