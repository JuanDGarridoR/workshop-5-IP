# Workshop #5 - Introduction to Programming

This project implements a C++ program that solves basic programming exercises using **functions and arrays**.

## Description

The program displays a main menu with **4 points**, each corresponding to a different exercise:

1. **Point 1**

A program that, given an ordered vector of integers (with possible repetitions), generates a new vector where only unique values (without duplicates) appear. Finally, it displays the resulting vector.  

   - Reads a sorted vector of integers.  
   - Eliminates duplicates.  
   - Displays the vector with unique values.  

2. **Point 2**

A program that stores the tons of cereal harvested during the 12 months of the year in a one-dimensional array. It provides the following information:  

   - Calculates the **annual average** of tons harvested.  
   - Indicates how many months had a harvest **above the average**.  
   - Indicates how many months had a harvest **below the average**.  
   - Determines the month with the **highest harvest**.  

3. **Point 3**

A program that multiplies the elements of two vectors of the same size with integer values between 1 and 10. The multiplication is done by pairing the first element of the first vector with the last element of the second vector, the second with the penultimate, and so on. It then displays the resulting vector.  

   - Reads two vectors of the same size.  
   - Multiplies elements in reverse order (first with last, second with penultimate, etc.).  
   - Displays the resulting vector.  

4. **Point 4**

A program that, given two vectors of the same size with integer values, calculates and displays:  

   - The **union** of both vectors.  
   - The **intersection** of the vectors (common elements).  
   - The **symmetric difference** between the vectors (elements not repeated in both).  

## How to Run

1. **Download and extract it from the .zip**
2. **Find the downloads folder (or the folder where you saved it) in the terminal.**  
3. **Enter the following commands**  
   - Compile:
      ```bash
      g++ workshop-5-IP.cpp -o workshop-5-IP
      ```
   - Run it:
      ```bash
      workshop-5-IP.exe
      ```

## Considerations

- Make sure you have a C++ compiler installed.
