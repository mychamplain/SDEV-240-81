// Lab 5 areas2.cpp
// Program to calculate areas of objects
// Llewellyn van der Merwe
// INCLUDE ANY NEEDED FILES HERE.

#include <iostream>
using namespace std;

int main()
{  
    // DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
    const float pi = 3.14159;
    // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
    // NAME AND AN APPROPRIATE DATA TYPE.
    int choice = 0;    // Menu choice should be 1, 2, 3, or 4
    float width;   // used for both square and triangle
    float height;  // used for both square and triangle
    float radius;  // used for circle
    float area;    // the value of the area
    // repeat the menu until quit
    do
    {
        // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
        cout << "Choose an object for which we should calculate the area for you. \n\n";
        cout << "    1 -- square\n" << "    2 -- circle\n"
            << "    3 -- right triangle\n" << "    4 -- quit\n\n";
        // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
        while (true)
        {
            cout << "Enter only a number: ";
            cin >> choice;
            if(cin.fail() || choice > 4 || choice < 1) {
                cin.clear(); cin.ignore();
                cout << "\nError, you must choose be between 1 and 4\n" << endl;
            } else break;
        }

        // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
        if (choice == 1 || choice == 3) {
            while (true) {
                cout << "Enter width: ";
                cin >> width;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\nError, must be a number\n" << endl;
                } else break;
            }
            while (true) {
                cout << "Enter height: ";
                cin >> height;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\nError, must be a number\n" << endl;
                } else break;
            }
        } else if (choice == 2) {
            while (true) {
                cout << "Enter radius of the circle: ";
                cin >> radius;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "\nError, must be a number\n" << endl;
                } else break;
            }
        } else if (choice == 4) {
            return 0;
        }
        // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
        // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
        // BE DISPLAYED.
        if (choice == 1) {
            area = width * height;
        } else if (choice == 2) {
            area = pi * radius * radius;
        } else if (choice == 3) {
            area = width * height;
        }
        cout << "\nArea = " << area << "\n======================\n" << endl;
    } while (choice < 4);
      
   return 0;
}