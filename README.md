# **Instructor Information Management System**  

## **Overview**  
A simple C++ program to manage and display instructor details using object-oriented programming.

## **Features**  
- Defines an **`Instructors` class** with three public attributes (`Name`, `Age`, and `Salary`).  
- Includes a **`print()` method** to display instructor details.  
- Creates two instances of the `Instructors` class in the `main()` function.  
- Assigns values to each instructor and prints their details using the `print()` method.  

## **Code Structure**  
- `Instructors` Class:  
  - **Attributes**:  
    - `Name`: Stores the instructor's name.  
    - `Age`: Stores the instructor's age.  
    - `Salary`: Stores the instructor's salary in EGP.  
  - **Method**:  
    - `print()`: Prints the instructor's information.  

- `main()` Function:  
  - Creates two instructor objects (`No1` and `No2`).  
  - Assigns values to their attributes.  
  - Calls `print()` to display each instructor's details.  

## **How to Run the Program**  
1. **Compile the program** using a C++ compiler:  
   ```sh
   g++ instructors.cpp -o instructors
   ```  
2. **Run the compiled executable**:  
   ```sh
   ./instructors
   ```  
3. The output will display the instructor details.  

## **Sample Output**  
```
The instructor name is Mohsen with age 29 years old and salary is 15000 EGP.
The instructor name is Ahmed with age 35 years old and salary is 25000 EGP.
```

## **Potential Improvements**  
- **Encapsulation**: Make attributes `private` and use getter/setter methods.  
- **Input Handling**: Allow users to enter instructor details dynamically.  
- **File Handling**: Save instructor data to a file for later retrieval.  
