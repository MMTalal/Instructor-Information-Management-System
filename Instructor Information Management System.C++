#include <iostream> // Include the iostream library for input and output operations
#include <string> // Include the string library for input and output texts
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions

// Define a class named Instructors to store details of instructors
class Instructors 
{
private: // Access specifier to make class members private (only accessible within the class)

    // Attributes of the class to store instructor details
    string Name;   // Variable to store the instructor's name
    int Age;       // Variable to store the instructor's age
    int Salary;    // Variable to store the instructor's salary

public: // Public access specifier to allow access to class members outside the class
    // ------------ constructor overloading ------------
   // using Default constructor type for assign defulte values in Instructor No1
    Instructors()
    {
        Name = "Unknown"; // Initialize name to a default value
        Age = 0;          // Initialize age to 0
        Salary = 0;       // Initialize salary to 0
    }
    
    // using Parameterized Constructor type for assign defulte values in Instructor No2
    Instructors(string name, int age = 25, int salary = 7000)
    {
        string text = ""; // Initialize an empty string to store the valid characters of the name

        // Loop through each character in the input string 'n'
        for (int i = 0; i < name.size(); i++) 
        {
            // Check if the current character is an uppercase letter (A-Z) or a lowercase letter (a-z)
            if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') || (name[i] == ' ')) 
            {
                // If the character is valid (an alphabet), append it to the 'text' string
                text += name[i];
            }
            // Non-alphabetic characters (like numbers or symbols) are ignored
        }
    
        // Update the 'Name' attribute with the filtered name
        Name = text;
    
        // If no valid alphabetic characters were found, set the name to "Unknown"
        if (text.empty()) 
        {
            Name = "Unknown";
            cout << "The name contains no valid alphabetic characters. Setting name to 'Unknown'." << endl;
        }
    
        // Validate age
        if (age > 25 && age < 60) 
        {
            Age = age; // Use the provided age if valid
        }
        else 
        {
            Age = 25; // Use the default age if invalid
            cout << "Invalid age (" << age << "). Using default age (25)." << endl;
        }

        // Validate salary
        if (salary > 7000 && salary < 30000) 
        {
            Salary = salary; // Use the provided salary if valid
        } 
        else 
        {
            Salary = 7000; // Use the default salary if invalid
            cout << "Invalid salary (" << salary << "). Using default salary (7000)." << endl;
        }
    }
    // ------------ The end of constructor overloading ------------

    void SetName(string n)
    {
        string text = ""; // Initialize an empty string to store the valid characters of the name
    
        // Loop through each character in the input string 'n'
        for (int i = 0; i < n.size(); i++) 
        {
            // Check if the current character is an uppercase letter (A-Z) or a lowercase letter (a-z)
            if ((n[i] >= 'A' && n[i] <= 'Z') || (n[i] >= 'a' && n[i] <= 'z') || (n[i] == ' ')) 
            {
                // If the character is valid (an alphabet), append it to the 'text' string
                text += n[i];
            }
            // Non-alphabetic characters (like numbers or symbols) are ignored
        }
    
        // Update the 'Name' attribute with the filtered name
        Name = text;
    
        // If no valid alphabetic characters were found, set the name to "Unknown"
        if (text.empty()) 
        {
            Name = "Unknown";
            cout << "The name contains no valid alphabetic characters. Setting name to 'Unknown'." << endl;
        }
    }
    
    // Function to retrieve the name of the instructor
    string GetName()
    {
        return Name; // Return the stored name
    }
    
    // Function to set the age of the instructor
    void SetAge(int x)
    {
        if (x > 25 && x < 60) // Ensure the instructor's age is greater than 25 and less than 60 years old
        {
            Age = x; // Assign the valid age
        }
        else
        {
            cout << "The age must be more than 25 and less than 60 years old." << endl; // Print error message if invalid
        }
    }
    
    // Function to retrieve the age of the instructor
    int GetAge()
    {
        return Age; // Return the stored age
    }
    
    // Function to set the salary of the instructor
    void SetSalary(int s)
    {
        if (s > 7000 && s < 30000) // Ensure salary is greater than 7000 and less than 30000 EGP
        {
            Salary = s; // Assign the valid salary
        }
        else
        {
            cout << "The salary must be more than 7000 and less than 30000 EGP." << endl; // Print error message if invalid
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
    // Create the first instructor object using the default constructor
    {
        Instructors No1; // Declare an object of type Instructors using the default constructor

        // Prompt the user to enter the name of the first instructor
        cout << "Enter the name of first instructor: ";
        string name;
        getline(cin, name); // Use getline to read the full name
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

    // Clear the input buffer before reading the name of the second instructor
    cin.ignore();

    // Create the second instructor object using the parameterized constructor
    {

        // Prompt the user to enter the name of the second instructor
        cout << "Enter the name of second instructor: ";
        string name;
        getline(cin, name); // Use getline to read the full name

        // Prompt the user to enter the age of the second instructor
        cout << "Enter the age of second instructor: ";
        int age;
        cin >> age;

        // Prompt the user to enter the salary of the second instructor
        cout << "Enter the salary of second instructor: ";
        int salary;
        cin >> salary;
        
        // Removed the calls to No2.SetName(name), No2.SetAge(age), and No2.SetSalary(salary) because the parameterized constructor already handles the initialization of the object.

        // Create the second instructor object using the parameterized constructor after cin to make the varibale in the same scope in the function of Instructors No2
        Instructors No2(name, age, salary);

        // Print the details of the second instructor
        No2.print();
    }

    return 0; // Indicate that the program executed successfully
}
