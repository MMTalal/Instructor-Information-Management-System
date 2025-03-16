# **Instructor Information Management System**  

## **Overview**  
A C++ program to manage and display instructor details using object-oriented programming. The program allows users to input instructor details, validates the input, and displays the filtered and validated information. It demonstrates the use of **constructor overloading** to initialize objects with default or user-provided values.

## **Features**  
- Defines an **`Instructors` class** with private attributes (`Name`, `Age`, and `Salary`) and public methods to set and retrieve these attributes.  
- Includes **constructor overloading**:  
  - **Default Constructor**: Initializes attributes with default values (`Name = "Unknown"`, `Age = 0`, `Salary = 0`).  
  - **Parameterized Constructor**: Initializes attributes with user-provided values and validates them.  
- Validates user input for:  
  - **Name**: Only alphabetic characters and spaces are allowed.  
  - **Age**: Must be between 26 and 59 years.  
  - **Salary**: Must be between 7001 and 29999 EGP.  
- Creates two instances of the `Instructors` class in the `main()` function:  
  - One using the **default constructor**.  
  - One using the **parameterized constructor**.  
- Prints instructor details using the `print()` method.  

## **Code Structure**  
- **`Instructors` Class**:  
  - **Attributes**:  
    - `Name`: Stores the instructor's name (default: `"Unknown"`).  
    - `Age`: Stores the instructor's age (default: `0`).  
    - `Salary`: Stores the instructor's salary in EGP (default: `0`).  
  - **Constructors**:  
    - **Default Constructor**: Initializes attributes with default values.  
    - **Parameterized Constructor**: Validates and initializes attributes with user-provided values.  
  - **Methods**:  
    - `SetName(string n)`: Validates and sets the instructor's name. Filters out non-alphabetic characters.  
    - `GetName()`: Returns the instructor's name.  
    - `SetAge(int x)`: Validates and sets the instructor's age.  
    - `GetAge()`: Returns the instructor's age.  
    - `SetSalary(int s)`: Validates and sets the instructor's salary.  
    - `GetSalary()`: Returns the instructor's salary.  
    - `print()`: Prints the instructor's details.  

- **`main()` Function**:  
  - Creates two instructor objects:  
    - `No1`: Initialized using the **default constructor**.  
    - `No2`: Initialized using the **parameterized constructor**.  
  - Prompts the user to input details for each instructor.  
  - Validates and sets the attributes using the `SetName`, `SetAge`, and `SetSalary` methods for `No1`.  
  - Uses the **parameterized constructor** to validate and initialize attributes for `No2`.  
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
3. Follow the prompts to enter instructor details.  
4. The program will display the instructor details after validation.  

## **Sample Output**  
```
Enter the name of first instructor: Ma7m5d  
Enter the age of first instructor: 30  
Enter the salary of first instructor: 15000  
The instructor name is Mamd with age 30 years old and salary is 15000 EGP.  

Enter the name of second instructor: J@ne D0e  
Enter the age of second instructor: 20  
Invalid age. Using default age (25).  
Enter the salary of second instructor: 5000  
Invalid salary. Using default salary (7000).  
The instructor name is Jne De with age 25 years old and salary is 7000 EGP.  
```

## **Potential Improvements**  
1. **File Handling**: Save instructor data to a file for later retrieval.  
2. **Input Validation Enhancements**:  
   - Allow special characters (e.g., hyphens or apostrophes) in names if necessary.  
   - Provide more detailed error messages for invalid inputs.  
3. **User Interface**:  
   - Add a menu-driven interface for easier interaction.  
   - Allow users to edit or delete instructor records.  
4. **Data Persistence**:  
   - Use a database to store and manage instructor data.  
5. **Additional Attributes**:  
   - Add more attributes like `Department`, `Email`, or `Phone Number`.  
6. **Search and Filter**:  
   - Implement functionality to search for instructors by name, age, or salary.  
7. **Error Handling**:  
   - Handle exceptions for invalid input types (e.g., non-integer input for age or salary).  

## **Dependencies**  
- C++ Standard Library (`<iostream>`, `<string>`).  
- A C++ compiler (e.g., `g++`).  

## **License**  
This project is open-source and available under the MIT License.  
