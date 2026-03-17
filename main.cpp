#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double factor = 0.1;
    double scholarship = 10000.0;

    // Ask for Student Status, Gender, and Major

    cin >> status >> gender >> major;
    
    if (status == "Student")
        {
            status = "student";
        }
    if (status == "Non-Student" || status == "Nonstudent" || status == "nonstudent")
        {
            status = "non-student";
        }
    if (gender == "Male")
        {
            gender = "male";
        }
    if (gender == "Female")
        {
            gender = "female";
        }
    if (major == "CS")
        {
            major = "cs";
        }
    if (major == "Other")
        {
            major = "other";
        }
    if (status != "student" && status != "non-student")
        {
            cout << "Invalid input. Please enter valid values." << endl;
            return 1;
        }
    if (gender != "male" && gender != "female")
        {
            cout << "Invalid input. Please enter valid values." << endl;
            return 1;
        }
    if (major != "cs" && major != "other")
        {
            cout << "Invalid input. Please enter valid values." << endl;
            return 1;
        }
    // Calculate factor amount
    if (status == "student")
        {
            factor = 0.2;
            if (gender == "female")
                {
                    factor = 1.0;
                    if (major == "cs")
                        {
                            factor = 3.0;
                        }
                }
            if (major == "cs" && gender != "female")
                {
                    factor = 2.0;
                } 
        }
    else 
        {
            factor = 0.1;
            if (major == "cs")
                {
                    factor = 0.5;
                }
        }
    // Calculate scholarship amount
    scholarship = scholarship * factor;
    // Set output formatting
    cout << setprecision(1) << fixed;
    cout << factor << " ";
    // Output scholarship amount
    cout << setprecision(2) << fixed;
    cout << scholarship << endl;

    return 0;
}
