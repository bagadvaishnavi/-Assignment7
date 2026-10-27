# Assignment 7: Implementation of Polymorphism in C++

## 1. Practical Details

- **Course:** SY B.Tech. Artificial Intelligence and Machine Learning
- **Practical No.:** 7
- **Title:** Implementation of Polymorphism in C++
- **Programming Language:** C++
- **IDE:** Dev-C++
- **Library Used:** iostream

## 2. Problem Statement

Write a C++ program to demonstrate polymorphism. The program demonstrates compile-time polymorphism using function overloading and operator overloading, and run-time polymorphism using virtual functions and function overriding through a base-class pointer.

## 3. Objectives

1. To understand polymorphism and its meaning: one name, many forms.
2. To understand compile-time and run-time polymorphism.
3. To implement function overloading.
4. To implement operator overloading.
5. To implement function overriding using virtual functions.
6. To understand the difference between overloading and overriding.

## 4. Theory

Polymorphism is an important feature of object-oriented programming. It allows the same function name or operator to behave differently in different situations.

### A. Function Overloading

Function overloading means defining multiple functions with the same name but different parameter lists.

The `Calculator` class contains three `add()` functions:
- `add(int, int)`
- `add(int, int, int)`
- `add(float, float)`

### B. Operator Overloading

Operator overloading gives a special meaning to an existing operator for objects of a user-defined class.

In this program, the `+` operator is overloaded to add two complex numbers.

### C. Run-Time Polymorphism

Run-time polymorphism is achieved through virtual functions and function overriding.

The `Animal` class contains a virtual function named `sound()`. The `Dog` and `Cat` classes override this function to display different sounds.

## 5. Classes Used

- **Calculator:** Demonstrates function overloading.
- **Complex:** Demonstrates operator overloading.
- **Animal:** Contains the virtual `sound()` function.
- **Dog:** Overrides `sound()` to display the dog's sound.
- **Cat:** Overrides `sound()` to display the cat's sound.

## 6. Algorithm

1. Start the program.
2. Create a Calculator class with three overloaded `add()` functions.
3. Call the functions and display their results.
4. Create a Complex class with real and imaginary parts.
5. Overload the `+` operator to add two complex numbers.
6. Accept two complex numbers and display their sum.
7. Create an Animal class with a virtual `sound()` function.
8. Derive Dog and Cat from Animal and override `sound()`.
9. Use an Animal pointer to call the Dog and Cat versions of `sound()`.
10. Stop the program.

## 7. Test Cases

| Test Case | First Complex Number | Second Complex Number | Expected Sum |
|---|---|---|---|
| 1 | 2 + 3i | 4 + 5i | 6 + 8i |
| 2 | 1 + 1i | 2 + 2i | 3 + 3i |

Expected function-overloading results:
- `add(2, 3) = 5`
- `add(1, 2, 3) = 6`
- `add(1.5, 2.5) = 4`

Expected virtual-function output:
- `Dog says: Bhow Bhow`
- `Cat says: Meow Meow`

## 8. How to Run

1. Open `main.cpp` in Dev-C++.
2. Compile the program.
3. Run the program.
4. Enter the real and imaginary parts of both complex numbers when prompted.
5. Verify the output.

## 9. Result

The program demonstrates function overloading, operator overloading, and run-time polymorphism using virtual functions. Both complex-number test cases produce the expected sums.

## 10. Conclusion

The practical demonstrates polymorphism in C++. Function overloading and operator overloading illustrate compile-time polymorphism, while virtual functions and overriding illustrate run-time polymorphism. These features make C++ programs more flexible, reusable, and easier to extend.

## 11. Student Details

Fill in your own details before submitting the assignment.

- **Student Name:** Your Name
- **PRN:** Your PRN
- **Division:** Your Division
- **Batch:** Your Batch
- **Date of Submission:** Your Submission Date
