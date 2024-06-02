# Euler's Phi Function Calculation

Welcome to the Euler's Phi Function Calculation repository! This project provides a C program to calculate Euler's Phi function, which is used to determine the number of integers up to a given integer `n` that are relatively prime to `n`.

## File Descriptions

### `euler-phi-code.c`

This C file contains the entire code for calculating Euler's Phi function. The program performs the following tasks:

1. **Prime Factorization:** The `factorization` function finds the prime factors of the input number `n` and their powers.
2. **Greatest Common Divisor (GCD):** The `gcd` function checks if two numbers are relatively prime by calculating their GCD.
3. **Prime Check:** The `prime_no` function determines if a given number is prime.
4. **Phi Function Calculation:** The `main` function calculates the value of Euler's Phi function using the prime factors and their powers. It also prints all numbers less than `n` that are relatively prime to `n`.

