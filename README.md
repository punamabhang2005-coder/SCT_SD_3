# SCT_SD_3
# 🧩 Sudoku Solver – C++

## 📌 Project Overview

This project implements a **Sudoku Solver** using C++ and the **Backtracking Algorithm**.  
The program takes a 9×9 Sudoku grid as input (where `0` represents empty cells) and automatically solves the puzzle while following all Sudoku rules.

---

## 🎯 Objective

- Accept a 9×9 Sudoku puzzle from the user  
- Validate Sudoku constraints (row, column, 3×3 subgrid)  
- Solve the puzzle using recursion and backtracking  
- Display the solved Sudoku grid  
- Handle unsolvable cases  

---

## 🧠 Algorithm Used – Backtracking

1. Search for an empty cell (value `0`)
2. Try numbers from `1` to `9`
3. Check if the number is valid:
   - Not present in the same row
   - Not present in the same column
   - Not present in the same 3×3 subgrid
4. If valid, place the number
5. Recursively solve the remaining grid
6. If no number works, backtrack

---

## 🛠️ Technologies Used

- C++
- VS Code
- MinGW (g++ compiler)
- PowerShell

---

## 📂 File Structure
