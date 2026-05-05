# XIX Cantonal IT Competition ZDK (2014) 🏆

This folder contains my solutions to the problems from the **XIX Cantonal IT Competition for High School Students**, held at the Gymnasium "Edhem Mulabdić" in Maglaj, Bosnia and Herzegovina.

## 📂 Problem Descriptions

Here are the translated descriptions of the five algorithmic tasks presented in the competition paper:

### Task 1: Flour Bags Combinations
A store has flour packaged in bags of 10kg, 15kg, and 25kg. Write a program to determine how to deliver `m` kg of ordered flour to a customer without opening the bags. Print all possibilities.
* **Input:** Integer `m` (quantity of flour in kg).
* **Output:** On a separate line, print all packaging combinations or the message "Ne može se izvršiti tražena podjela" (The requested division cannot be made).
* **Example:** For input 25, outputs are `0 0 1` and `1 1 0` (representing counts of 10kg, 15kg, and 25kg bags).

### Task 2: Sum of Two Primes
Write a program to enter a natural number n > 2. Represent and print the entered number as the sum of two prime numbers. If this is not possible, print the message: "ne vazi za n=..." (does not apply for n=...).
* **Input:** Natural number n > 2.
* **Output:** On a separate line, print the numbers and the corresponding addends or the specified message.
* **Example:** For n=5, output is `5=2+3`. For n=11, output is `ne vazi za n=11`.

### Task 3: Digit Frequencies in an Interval
Write a program that determines which digits appear and how many times they appear when printing all natural numbers in the interval from n1 to n2 (inclusive).
* **Input:** Integers n1, n2 (lower and upper bounds of the interval).
* **Output:** On separate lines, print which digit and how many times it appears for each of them in the given interval.
* **Example:** For input n1=11, n2=12, output is: `cifra 1 pojavljuje se 3 puta` (digit 1 appears 3 times), `cifra 2 pojavljuje se 1 puta` (digit 2 appears 1 time).

### Task 4: Periodic Function Value
A real periodic function with a period of 1 is given by a graph on the interval [0,1]. Write a program that calculates the value of the function y for an arbitrary value of the argument x. 
*(Note: Based on the provided graph, the function points are (0,0), (0.25, 1), (0.5, 0), (0.75, -1), and (1,0) check the picture!)*.
* **Input:** Real number from the interval (0,1).
* **Output:** Function value y.
* **Example:** For input x=0.65, output is y=-0.15.

### Task 5: Sum of Two Squares
Write a program that prints all integers from the interval 1 to N that can be written as the sum of the squares of two natural numbers.
* **Input:** Natural number N (2 <= N <= 10000), upper bound of the interval.
* **Output:** On a separate line, print every number that can be written as the sum of the squares of two integers in the given format.
* **Example:** For input 5, the outputs are: 2 and 5.

---
*Note: Descriptions are translated from the original Bosnian competition paper.*