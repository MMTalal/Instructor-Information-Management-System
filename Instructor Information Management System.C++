#include <iostream> // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions

// Define a class named Instructors to store details of instructors
class Instructors 
{
private: // Access specifier to make class members private (only accessible within the class)

    // Attributes of the class to store instructor details
    string Name;   // Variable to store the instructor's name
    int Age = 0;   // Variable to store the instructor's age, initialized to 0
    int Salary = 0; // Variable to store the instructor's salary, initialized to 0
    // Initial values ​​ensure that variables always have a default value if not set
    // If the user enters an age less than or equal to 25, it remains 0. Same for salary if less than 7000.

public: // Public access specifier to allow access to class members outside the class
    
    // Function to set the name of the instructor
    void SetName (string n)
    {
        Name = n;
    }
    
    // Function to retrieve the name of the instructor
    string GetName()
    {
        return Name; // Return the stored name
    }
    
    // Function to set the age of the instructor
    void SetAge (int x)
    {
        if (x > 25 && x < 60) // Ensure the instructor's age is greater than 25 and less than 60 years old
        {
            Age = x; // Assign the valid age
        }
        else
        {
            cout << "The age must be more than 25 years old." << endl; // Print error message if invalid
        }
    }
    
    // Function to retrieve the age of the instructor
    int GetAge()
    {
        return Age; // Return the stored age
    }
    
    // Function to set the salary of the instructor
    void SetSalary (int s)
    {
        if (s > 7000 && s < 30000) // Ensure salary is greater than 7000 and less than 30000 EGP
        {
            Salary = s; // Assign the valid salary
        }
        else
        {
            cout << "The salary must be more than 7000 EGP." << endl; // Print error message if invalid
        }
    }
    
    // Function to retrieve the salary of the instructor
    int GetSalary()
    {
        return Salary; // Return the stored salary
    }
    
    // Function to print instructor details
    void print()
    {
        // Display the instructor's details using cout
        cout << "The instructor name is " << Name  // Print the name of the instructor
             << " with age " << Age                // Print the age of the instructor
             << " years old and salary is " << Salary  // Print the salary of the instructor
             << " EGP." << endl;  // End the output with a newline
    }
};

int main() {
    // Create the first instructor object and input data
    {
        Instructors No1; // Declare an object of type Instructors

        // Prompt the user to enter the name of the first instructor
        cout << "Enter the name of first instructor: ";
        string name;
        getline(cin, name); // Getline ensures full names can be entered.
        No1.SetName(name); // Set the instructor's name

        // Prompt the user to enter the age of the first instructor
        cout << "Enter the age of first instructor: ";
        int age;
        cin >> age;
        No1.SetAge(age); // Set the instructor's age

        // Prompt the user to enter the salary of the first instructor
        cout << "Enter the salary of first instructor: ";
        int salary;
        cin >> salary;
        No1.SetSalary(salary); // Set the instructor's salary

        // Print the details of the first instructor
        No1.print();
    }

    // Create the second instructor object and input data
    {
        Instructors No2; // Declare another object of type Instructors

        // Prompt the user to enter the name of the second instructor
        cout << "Enter the name of second instructor: ";
        string name;
        getline(cin, name); // Getline ensures full names can be entered.
        No2.SetName(name); // Set the instructor's name

        // Prompt the user to enter the age of the second instructor
        cout << "Enter the age of second instructor: ";
        int age;
        cin >> age;
        No2.SetAge(age); // Set the instructor's age

        // Prompt the user to enter the salary of the second instructor
        cout << "Enter the salary of second instructor: ";
        int salary;
        cin >> salary;
        No2.SetSalary(salary); // Set the instructor's salary

        // Print the details of the second instructor
        No2.print();
    }

    return 0; // Indicate that the program executed successfully
}
