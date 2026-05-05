# XX Cantonal IT Competition ZDK (2015) 🏆

This folder contains my solutions to the problems from the **XX Cantonal IT Competition for High School Students**, held in Zenica, Bosnia and Herzegovina, on March 21, 2015.

## 📂 Problem Descriptions

Here are the translated descriptions of the five algorithmic tasks presented in the competition paper:

### Task 1: Reverse Number
Write a program that, for a given natural number `n`, forms a number `i` composed of the same digits but in reverse order. 
* **Input:** Natural number `n` (numbers will not end with the digit 0).
* **Output:** Natural number `i`.
* **Example:** For input 1234, output is 4321. 

### Task 2: Number Transformations
Write a program that performs the following transformations for four entered integers (x, y, z, k): if `max(x, y, z, k) >= 500` then x and y are decreased by 50, otherwise each of the numbers x, y, z, k is decreased by its units digit (ones digit). In the first row print the newly obtained numbers and in the second row the sum of the newly obtained numbers. *(Note: The example only displays the sum in the output)*.
* **Example:** For input `63 12 82 30`, output is `180`. 

### Task 3: Sentence Acronym
A sentence is given consisting of one or more words separated by a single space. Write a program that will determine the acronym for the given sentence. Note: write the acronym in UPPERCASE LETTERS. For the purposes of this task, we create the acronym of the given sentence by taking the first letter of each word in order, unless the word is one of the following conjunctions: 'i', 'pa', 'te', 'ni', 'niti', 'a', 'ali', 'nego', 'no', and 'ili'. In that case, we ignore the word. However, if one of these conjunctions is the first word in the sentence, we consider that word a keyword, so it is included in the acronym. The only allowed characters within the sentence are lowercase letters of the English alphabet ('a' ... 'z') and space. The sentence consists of a maximum of 100 characters.
* **Example:** For input "dragi ucenici i profesori", output is "DUP".

### Task 4: Missing JMBG Digits
Every citizen of an unknown country possesses their unique personal identification number (JMBG). In that country, JMBG is a 19-digit number of the form: DDMMGGGGAAAAAAAAAAK, where the digits DD denote the day, MM the month, and GGGG the year of birth. The year of birth is a natural number between 0001 and 9999. A year is a leap year if it is divisible by 4, and not divisible by 100 or is divisible by 400. For the digits marked with A, we consider them arbitrary, and K is a control digit obtained by the following algorithm:
1. Let's denote all digits in the JMBG except the last one in order with Z1 to Z18.
2. S = (10*Z1 + 9*Z2 + 8*Z3 + ... + 2*Z9 + 10*Z10 + 9*Z11 + 8*Z12 + ... + 2*Z18) mod 19.
3. if S <= 9 then K = S, otherwise K = 19 - S.
Write a program that will determine how many different valid JMBGs it is possible to get from the record where missing digits are marked with 'X'.
* **Input:** Array of 19 characters consisting of digits '0'..'9' and character 'X'.
* **Example:** For input `30121952121234567XX`, output is `10`.

### Task 5: Equation Fix (Addition)
An unusual equation of the form A=S is given. What makes the equation unusual is that A and S are not equal, which is why the equality is not satisfied. Namely, on the left side of the equality, addition operations are missing between some digits of number A. Write a program that will insert the smallest possible number of addition operations into the left side of the given equation so that the equality is satisfied. Numbers in the corrected equality can contain an arbitrary number of leading zeros. 
* **Input:** Equation in the given form A=S. Number A can have a maximum of 1000 digits. Number S is less than or equal to 5000. Numbers will not be equal and will not start with the digit 0.
* **Output:** The corresponding equality. If multiple solutions exist, print any.
* **Example:** For input `143175=120`, output is `14+31+75=120`.

---
*Note: Descriptions are translated from the original Bosnian competition paper.*