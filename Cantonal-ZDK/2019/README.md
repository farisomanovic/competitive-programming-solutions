# XXIV Cantonal IT Competition ZDK (2019) 🏆

This folder contains my solutions to the problems from the **XXIV Cantonal IT Competition for High School Students**, held at the Gymnasium "Muhsin Rizvić" in Breza, Bosnia and Herzegovina, on April 6, 2019.

## 📂 Problem Descriptions

Here are the translated descriptions of the five algorithmic tasks presented in the competition paper:

### Task 1: Even and Odd Index Sum
Write a program that inputs the number of array elements `n`. After that, input the array elements and print the sum of array elements with an even index and the sum of array elements with an odd index. *(Note: The problem implies 1-based indexing for the elements).*
* **Input:** Number of elements `n`, followed by `n` numbers.
* **Output:** Sum of elements at even indices (`spar`) and sum of elements at odd indices (`snepar`).
* **Example:** For `n=5`, and `x[1]=5, x[2]=6, x[3]=3, x[4]=5, x[5]=6`, output should be: `spar=11, snepar=14`.

### Task 2: Sum of Every Second Two-Digit Number
Write a program that reads natural numbers less than 100 and adds every second entered number that is a two-digit number until the sum becomes greater than 100, which ends the input and prints the mentioned sum.
* **Input:** A sequence of natural numbers less than 100.
* **Output:** The final sum.
* **Example:** For the entered array: `5, 6, 9, 8, 88, 88, 33, 10, 15, 15`, the output should be `113`. *(Explanation: The numbers at even input positions are checked. 6 is not two-digit, 8 is not two-digit, 88 is two-digit -> sum=88, 10 is two-digit -> sum=98, 15 is two-digit -> sum=113. 113 > 100, so the loop stops).*

### Task 3: Next Smaller Element
Write a program that will read the number of array elements and the array elements themselves. Print the first next smaller array element on the right side for each entered array element. If there is no smaller element on the right for some array elements, print `-1` in that case.
* **Input:** Number of elements `n`, followed by `n` numbers.
* **Output:** The next smaller element to the right for each element.
* **Example:** For an entered array of `n=4` elements `x[1]=5, x[2]=9, x[3]=6, x[4]=3`, the output should be: `(5 -> 3), (9 -> 6), (6 -> 3), (3 -> -1)`.

### Task 4: Left-Truncatable Prime
Write a program that, for an entered natural number `n` (1 < n < 1,000,000), prints whether the number is a "left-truncatable prime" and if it is, prints all its "truncated prime numbers". (This is a number that is prime (divisible only by 1 or itself), and after sequentially removing each digit from the left, those resulting elements are also prime numbers).
* **Input:** Natural number `n`.
* **Output:** A message stating if it is a left-truncatable prime, followed by the truncated primes if true.
* **Examples:**
  * For `n=77777`, output: `Učitani broj n nije „lijevo izrezivani prost broj".`
  * For `n=98443`, output: `Učitani broj n je „lijevo izrezivani prost broj", a njegovi izrezivani prosti elementi(brojevi) su: 8443, 443, 43 i 3.`
  * For `n=17`, output: `Učitani broj n je „lijevo izrezivani prost broj", a njegovi izrezivani prosti elementi(brojevi) su: 7.`

### Task 5: Completely Prime Number
Write a program that, for an entered natural number `n` (1 < n < 1,000,000,000), prints one of its three possible characteristics:
a) The entered number `n` is not prime.
b) The entered number `n` is prime, but not completely prime.
c) The entered number `n` is completely prime and the sum of its digits is ___.
*(A completely prime number is one that is prime, and all of its digits are also prime numbers).*
* **Input:** Natural number `n`.
* **Output:** One of the three formatted string messages based on the number's properties.
* **Examples:**
  * For `n=333333333`, output: `Učitani broj n nije prost.`
  * For `n=17`, output: `Učitani broj n je prost, ali ne i potpuno prost.`
  * For `n=73`, output: `Učitani broj n je potpuno prost i zbir njegovih cifara je 10.`

---
*Note: Descriptions are translated from the original Bosnian competition paper.*