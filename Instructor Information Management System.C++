#include <iostream> // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions

// Define a class named Instructors to store details of instructors
class Instructors 
{
public: // Access specifier to make class members accessible from outside the class

    // Attributes of the class to store instructor details
    string Name;   // Variable to store the instructor's name
    int Age;       // Variable to store the instructor's age
    int Salary;    // Variable to store the instructor's salary

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
    
    // Create an instance of the Instructors class for the first instructor
    {
        Instructors No1; // Declare an object No1 of type Instructors

        // Assign values to the object's attributes
        No1.Name = "Mohsen";  
        No1.Age = 29;         
        No1.Salary = 15000;

        // Call the print function to display No1's details
        No1.print(); 
    }

    // Create an instance of the Instructors class for the second instructor
    {
        Instructors No2; // Declare another object No2 of type Instructors

        // Assign values to the object's attributes
        No2.Name = "Ahmed";   
        No2.Age = 35;         
        No2.Salary = 25000;   

        // Call the print function to display No2's details
        No2.print();
    }

    return 0; // Indicate that the program executed successfully
}
